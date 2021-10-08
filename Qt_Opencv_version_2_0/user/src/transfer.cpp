#include "user/inc/transfer.h"
#include "user/inc/distance.h"

cv::Point3f circle_world;
vector<cv::Point3f> world_point;
float Z_c;

CameraParameters::CameraParameters(cv::Point2i center_pixel, cv::Point2i img_center, float scale) {
    circle_center_pixel = center_pixel;
    img_center_pixel = img_center;
    scale_user = scale;
}

void CameraParameters::coordinatez_transfer(cv::Point2i Pixel_Points, cv::Point3f& World_Points) {
    cv::Mat inv_in64, inv_in;
    inv_in64 = CameraParameters::IntrinsicMatrix.inv();
    inv_in64.convertTo(inv_in, CV_32F);
    cv::Mat r, t;
    CameraParameters::RotationMatrice.convertTo(r, CV_32F);
    CameraParameters::TranslationVector.convertTo(t, CV_32F);
    // 罗德里格斯公式--用于旋转向量与旋转矩阵的相互转换
    //Rodrigues(RotationMatrice.getMat(), rMat);

    //计算 invR * T
    cv::Mat inv_r;
    inv_r = r.inv();

    cv::Mat transPlaneToCam;
    if (t.size() == cv::Size(1, 3)) {
        transPlaneToCam = inv_r * t;
    }
    else if (t.size() == cv::Size(3, 1)) {
        transPlaneToCam = inv_r * t.t();
    }
    else
        exit(EXIT_FAILURE);

    cv::Mat coords(3, 1, CV_32F);
    cv::Point3f pt;
    coords.at<float>(0, 0) = Pixel_Points.x;
    coords.at<float>(1, 0) = Pixel_Points.y;
    coords.at<float>(2, 0) = 1.0;
    //[x,y,z] = invK * [u,v,1]
    cv::Mat worldPtCam = inv_in * coords;
    //[x,y,1] * invR
    cv::Mat worldPtPlane = inv_r * worldPtCam;
    //Zc 
    //float scale = transPlaneToCam.at<float>(2, 0) / worldPtPlane.at<float>(2, 0);
    //cout << scale << endl;
    cv::Mat scale_worldPtPlane(3, 1, CV_32F);
    //zc * [x,y,1] * invR
    //scale_worldPtPlane = scale * worldPtPlane;
    /*************************如果自己输入深度，解除注释*****************************/
    scale_worldPtPlane = CameraParameters::scale_user * worldPtPlane;
    /******************************************************/
    //cout << "scale_worldPtPlane:" << scale_worldPtPlane << endl;
    //[X,Y,Z]=zc*[x,y,1]*invR - invR*T
    cv::Mat worldPtPlaneReproject = scale_worldPtPlane - transPlaneToCam;
    //cout << "worldPtPlaneReproject:" << worldPtPlaneReproject << endl;
    World_Points.x = worldPtPlaneReproject.at<float>(0, 0);
    World_Points.y = worldPtPlaneReproject.at<float>(1, 0);
    World_Points.z = worldPtPlaneReproject.at<float>(2, 0);
}

void CameraParameters::circle_center_transfer(cv::Point3f& circle_center_world) {
    coordinatez_transfer(CameraParameters::circle_center_pixel, circle_center_world);
}

