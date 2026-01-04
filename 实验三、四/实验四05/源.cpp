#include<iostream>
using namespace std;
int indexOf(const char s1[], int size1, const char s2[], int size2, bool flag) {
	flag = true;
	int startnum = 0;
	for (startnum = 0; startnum < size2; startnum++) {
		for (int i = 0; i < size1; i++) {
			if (s1[i] == s2[startnum + i]) {
				flag = true;
				continue;
			}
			else {
				flag = false;
				break;
			}
		}
		if (flag == true) break;
	}
	return startnum;
}
int main() {
	const int size1 = 20;
	char s1[size1];
	const int size2 = 50;
	char s2[size2];
	bool flag = true;
	cout << "Enter the first string: ";
	cin.getline(s1, 20);
	cout << "Enter the second string: ";
	cin.getline(s2, 50);
	cout << "indexOf(";
	for (int i = 0; i < size1 && s1[i] != '\0'; i++) {
		cout << s1[i];
	}
	cout << ", ";
	for (int i = 0; i < size2 && s2[i] != '\0'; i++) {
		cout << s2[i];
	}
	cout << ") is ";
	indexOf(s1, size1, s2, size2, flag);
	if(flag == true){
		cout << indexOf(s1, size1, s2, size2, flag);
	}
	else{
		cout<<"-1";
	}
}