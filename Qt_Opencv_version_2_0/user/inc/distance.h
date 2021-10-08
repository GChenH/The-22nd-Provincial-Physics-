#ifndef _DISTANCE_H
#define _DISTANCE_H

#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;

extern float distance_center2center;
extern int count_world;
extern float c;

void calculate_distance(cv::Point3f point_1, cv::Point3f point_2, float& distance);

void angle_calculate(vector<float>& angle);

#endif  /* _DISTANCE_H */
