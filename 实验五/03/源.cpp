#include"Cuboid.h"
#include <iostream>
int main() {
	Cuboid Cube1, Cube2, Cube3;
	cout << "设置第一个长方体的信息：" << endl;
	Cube1.Setup();
	cout << "设置第二个长方体信息：" << endl;
	Cube2.Setup();
	cout << "设置第三个长方体信息：" << endl;
	Cube3.Setup();
	cout << "三个长方体的体积分别是：" << endl;
	Cube1.ShowVolume();
	Cube2.ShowVolume();
	Cube3.ShowVolume();
	return 0;
}