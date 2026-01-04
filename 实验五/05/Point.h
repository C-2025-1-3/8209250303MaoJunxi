#pragma once
#include <iostream>
class Point {
private:
	double x;
	double y;
public:
	Point() {
		x = 60;
		y = 80;
	}
	void setPoint(int i, int j) {
		x = 60+i;
		y = 80+j;
	}
	void display() {
		std::cout << "(" << x << "," << y << ")" << std::endl;
	}
};