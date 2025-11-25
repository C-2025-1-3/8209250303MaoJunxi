#include<iostream>
using namespace std;
int main() {
	char m;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
	cin >> m;
	if(97<=m and m<=122){
		cout << char(m - 32);
	}
	else {
		cout << m + 1;
	}
	return 0;
}