#include<iostream>
using namespace std;
int main() {
	float pi = 3.14;
	float r, h;
	cout << "请输入半径r：";
	cin >> r;
	cout << endl << "请输入锥高h：";
	cin >> h;
	cout << endl << "锥体体积为：" << pi * r * r * h / 3;
}