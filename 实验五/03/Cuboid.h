#pragma once
#include <iostream>
using namespace std;
class Cuboid {
private:
	double length;
	double width;
	double height;
public:
	void ShowVolume() {
		cout << "Volume: " << length * width * height << endl;
	}
	void Setup() {
		cout << "请输入长：";
		cin >> length;
		cout << "请输入宽：";
		cin >> width;
		cout << "请输入高：";
		cin >> height;
	}
	Cuboid() {
		length = 0.0;
		width = 0.0;
		height = 0.0;
	}
};