#include<iostream>
using namespace std;
void Math(int num1, int num2, int& min, int& max) {
	for (int i = num1; i <= num1*num2; i++) {
		if (i % num1 == 0 && i % num2 == 0) {
			min = i;
			break;
		}
	}
	for (int i = num1; i > 0; i--) {
		if (num1 % i == 0 && num2 % i == 0) {
			max = i;
			break;
		}
	}
}
//==============================================
//²âÊÔ´úÂëÈçÏÂ
//==============================================
//int main() {
//	int num1, num2;
//	cin >> num1 >> num2;
//	int min = 0, max = 0;
//	Math(num1, num2, min, max);
//	cout << min << endl;
//	cout << max << endl;
//	return 0;
//}