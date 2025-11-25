#include<iostream>
using namespace std;
int main() {
	float sum = 0;
	int num = 0;
	int daynum = 0;
	int day = 0;
	for (int i = 2; num < 100; i = 2 * i) {
		day = day + 1;
		daynum = i;
		num = num + i;
		sum = sum + i * 0.8;
	}
	day = day - 1;
	sum = sum - daynum * 0.8;
	num = num - daynum;
	cout << num << endl << sum<<endl<<day<<endl;
	float avarange = sum / day;
	cout << avarange;
}