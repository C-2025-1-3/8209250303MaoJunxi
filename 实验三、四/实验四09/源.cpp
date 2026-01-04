#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int parseHex(string Hexnum) {
	int result = 0;
	for (int i = Hexnum.length(); i >= 0; i--) {
		if (Hexnum[i] >= '0' and Hexnum[i] <= '9') {
			result += int(Hexnum[i] - '0') * pow(16, i);
		}
		else if (Hexnum[i] >= 'A' and Hexnum[i] <= 'F') {
						result += int(Hexnum[i] - 'A' + 10) * pow(16, i);
		}
		else if (Hexnum[i] >= 'a' and Hexnum[i] <= 'f') {
			result += int(Hexnum[i] - 'a' + 10) * pow(16, i);
		}
		else if (i == Hexnum.length()) {
			continue;
		}
		else{
			cout << "illegal" << endl;
			result = -1;
			break;
		}
	}
	return result;
}
int main() {
	cout << "Input a hexadecimal number:";
	string hex;
	cin >> hex;
	cout << "The decimal number is:" << parseHex(hex) << endl;
}