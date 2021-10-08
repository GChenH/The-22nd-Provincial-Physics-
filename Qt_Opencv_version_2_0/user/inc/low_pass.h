#ifndef _LOW_PASS_H
#define _LOW_PASS_H

#include <QMainWindow>
#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;

cv::Mat ideal_Low_Pass_Filter(cv::Mat &src, float sigma);
cv::Mat ideal_lbrf_kernel(cv::Mat &scr, float sigma);
cv::Mat freqfilt(cv::Mat &scr, cv::Mat &blur);

#endif /* _LOW_PASS_H */
