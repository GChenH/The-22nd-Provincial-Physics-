#ifndef _TRANSFER_H
#define _TRANSFER_H

#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;

class CameraParameters {
private:
    cv::Mat IntrinsicMatrix = (cv::Mat_<float>(3, 3) << 501.5459, 0.0, 325.7986,
                                                        0.0, 501.9722, 245.1138,
                                                        0.0, 0.0, 1.0);

    cv::Mat RotationMatrice = (cv::Mat_<float>(3, 3) << 0.9985, 0.0352, 0.0424,
                                                        -0.0362, 0.9991, 0.0232,
                                                        -0.0415, -0.0247, 0.9988);

    cv::Mat TranslationVector = (cv::Mat_<float>(3, 1) << -143.4779, 18.4857, 457.2207);

    float scale_user;
    cv::Point2i circle_center_pixel;
    cv::Point2i img_center_pixel;
public:
    CameraParameters(cv::Point2i center_pixel, cv::Point2i img_center, float scale);

    void coordinatez_transfer(cv::Point2i Pixel_Points, cv::Point3f& World_Points);

    void circle_center_transfer(cv::Point3f& circle_center_world);
};

extern cv::Point3f circle_world;
extern vector<cv::Point3f> world_point;
extern float Z_c;

#endif /* _TRANSFER_H */
