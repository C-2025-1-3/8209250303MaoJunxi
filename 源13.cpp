#include<iostream>
using namespace std;
float abs1(float x) {
	if (x >= 0) {
		return x;
	}
	else {
		return -x;
	}
}
int main() {
	float a;
	cin >> a;
	for (float i = a / 2; i > 0; i = 0.5 * (i + a / i)) {
		if (abs1(0.5 * (i + a / i) - i)< 0.01) {
			cout << i;
			break;
		}
	}
}