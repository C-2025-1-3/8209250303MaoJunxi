#include<iostream>
#include<string>
using namespace std;
void count(string input,int save[]) {
	for (int i = 0; i < input.length(); i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] = input[i] - 'A' + 'a';
            //cout << input[i];
        }
	}
	for (int i = 0; i < input.length(); i++) {
		if (input[i] >= 'a' && input[i] <= 'z') {
			save[int(input[i]) - int('a')]++;
		}
	}
}
int main() {
	string str;
	int length = str.length();
	int save[26] = { 0 };
	cout << "Enter a string: ";
	getline(cin, str);
	count(str, save);
    for (int i = 0; i < 26; i++) {
        if (save[i] != 0) {
			cout << char(i + int('a')) << ": " << save[i] << "times" << endl;
        }
    }
}