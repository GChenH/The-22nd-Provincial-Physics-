#include "user/inc/transfer.h"
#include "user/inc/distance.h"

int count_world = 0;
float distance_center2center;
float c;

void calculate_distance(cv::Point3f point_1, cv::Point3f point_2, float& distance) {
	float distance_2;
	distance_2 = pow((point_1.x - point_2.x), 2) + pow((point_1.y - point_2.y), 2) 
				+ pow((point_1.z - point_2.z), 2);
	distance = sqrt(distance_2);
}

void angle_calculate(vector<float>& angle) {
	float distance_5pixel;
	float a, b;
	float cos_a;
	float angle_single;
	for (int i = 0; i < count_world; i++) {
		calculate_distance(circle_world, world_point.at(i), distance_5pixel);
		a = distance_5pixel;
		b = sqrt(pow((distance_center2center - a), 2) + (double)Z_c * (double)Z_c);
		cos_a = (c * c + b * b - a * a) / (2 * b * c);
		//cout << cos_a << endl;
		angle_single = acos(cos_a) * 180.0 / 3.14159265;
		//cout << angle_single << endl;
		angle.push_back(angle_single);
	}
}
