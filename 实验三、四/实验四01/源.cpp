#include<iostream>
using namespace std;
int main() {
	int list[10] = { 0 };
	int OutputList[10] = { 0 };
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> list[i];
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (OutputList[j] == 0) {
				OutputList[j] = list[i];
				break;
			}
			else if (OutputList[j] == list[i]) {
				break;
			}
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i < 10; i++) {
		if (OutputList[i] != 0) {
			cout << " " << OutputList[i];
		}
		else {
			break;
		}
	}
	//for (int i = 0; i < 10; i++) {
	//	cout << " " << OutputList[i];
	//}
}