#include<iostream>
using namespace std;
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
	int arr[200] = { 0 };
	for (int i = 2; i < 2000; i++) {
		if (arr[199] != 0) {
			break;
		}
		if (is_prime(i)) {
			for (int j = 0; j < 200; j++) {
				if (arr[j] == 0) {
					arr[j] = i;
					break;
				}
			}
		}
	}
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 10; j++) {
			cout << arr[i * 10 + j] << " ";
		}
		cout << endl;
	}
	//cout << arr[1];
}