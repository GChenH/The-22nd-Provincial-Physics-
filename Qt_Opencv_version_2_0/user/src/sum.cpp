#include "user/inc/sum.h"

void sum_pixl(cv::Mat img_sum, double (&sum_end)[sum_length]) {
    for (int i = 0; i < img_sum.cols; i++) {
        for (int j = 0; j < img_sum.rows; j++) {
            if (img_sum.channels() == 1) {
                sum_end[i] += img_sum.at<float>(j, i);
                if(img_sum.at<float>(j, i) < 0){
                    qDebug() << "存在负数";
                }
                else if(img_sum.at<float>(j, i) > 1){
                    qDebug() << "灰度值大于1";
                }
                else if(img_sum.at<float>(j, i) == NAN){
                    qDebug() << "存在nan值";
                }
			}
            else{
                qDebug() << "channel = 3";
            }
		}
	}
}
