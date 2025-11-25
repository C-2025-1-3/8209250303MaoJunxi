#include<iostream>
using namespace std;
int max(int a, int b) {
	if (a <= b) {
		return b;
	}
	else {
		return a;
	}
}
int min(int a, int b) {
	if (a <= b) {
		return a;
	}
	else {
		return b;
	}
}
int main() {
	int a, b;
	cout << "请输入两个整数：";
	cin >> a;
	cin >> b;
	int minnum, maxnum = 1;
	for (int i = min(a, b); i > 0; i = i - 1) {
		if (a % i == 0 and b % i == 0) {
			cout << "最大公约数为：" << i << endl;
			break;
		}
	}
	for (int i = max(a, b); i < a * b + 1; i++) {
		if (i % a == 0 and i % b == 0) {
			cout << "最小公倍数为：" << i << endl;
			break;
		}
	}
}