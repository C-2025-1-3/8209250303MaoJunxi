#include<iostream>
using namespace std;
int main() {
	char a[255];
	cin.getline(a, 255, '\n');
	int eng = 0, numb = 0, space = 0, rest = 0;
	for (int i = 0; i <= 255;i++) {
		if (a[i] == '\n') {
			rest++;
			cout << "!";
			break;
		}
		else if (a[i] >= '0' and a[i] <= '9') {
			numb++;
		}
		else if (a[i] >= 'a' and a[i] <= 'z') {
			eng++;
		}
		else if (a[i] >= 'A' and a[i] <= 'Z') {
			eng++;
		}
		else {
			rest++;
		}
	}
	cout << "英文：" << eng << endl;
	cout << "数字：" << numb << endl;
	cout << "其他：" << rest << endl;
}