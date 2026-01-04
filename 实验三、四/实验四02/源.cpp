#include<iostream>
using namespace std;
int main() {
	double list[10] = { 0.0 };
	cout << "ÇëÊäÈë10¸öÊý£º" << endl;
	for(int i = 0; i < 10; i++) {
		cin >> list[i];
	}
	bool changed = true;
	double temp = 0.0;
	do {
		changed = false;
		for (int i = 0; i < sizeof(list) / 8 - 1; i++) {
			if (list[i] > list[i + 1]) {
				temp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
	for (int i = 0; i < sizeof(list) / 8; i++) {
		cout << list[i] << " ";
	}
}