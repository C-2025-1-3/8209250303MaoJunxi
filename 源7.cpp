#include<iostream>
using namespace std;
int main() {
	float x;
	while (1) {
		cin >> x;
		if (0 < x and x < 1) {
			cout << 3 - 2 * x << endl;
		}
		else if (1 <= x and x < 5) {
			cout << (1 / (2 * x)) + 1 << endl;
		}
		else if (5 <= x and x < 10) {
			cout << x * x << endl;
		}
		else {
			cout << "error";
			break;
		}
	}
	return 0;
}