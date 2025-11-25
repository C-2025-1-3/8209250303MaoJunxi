#include<iostream>
using namespace std;
int main() {
	float a, b, c;
	cout << "请输入三角形的三条边长（一次输入一条）：" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b <= c or a + c <= b or b + c <= a) {
		cout << "不能构成三角形！！！";
	}
	else {
		cout << "周长为" << a + b + c<<"且";
		if (a == b or a == c or b == c) {
			cout << "是等腰三角形";
		}
		else {
			cout << "不是等腰三角形";
		}
	}
}