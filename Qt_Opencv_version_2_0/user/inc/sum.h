#ifndef _SUM_H
#define _SUM_H

#include <QMainWindow>
#include <QDebug>
#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;

#define sum_length  640

void sum_pixl(cv::Mat img_sum, double (&sum_end)[sum_length]);

#endif /* _SUM_H  */
