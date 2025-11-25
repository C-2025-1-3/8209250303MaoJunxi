#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float t;
	cout << "请输入华氏温度：";
	cin >> t;
	cout << setprecision(3) << "摄氏度为：" << (t - 32) / 1.8;
	return 0;
}