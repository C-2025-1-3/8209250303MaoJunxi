#include<iostream>
using namespace std;
int main() {
	float a, b;
	char symb;
	cout << "请输入第一个数、计算符号、第二个数："<<endl;
	cin >> a;
	cin >> symb;
	cin >> b;
	if (symb == char('+') ) {
		cout << a + b;
	}
	else if (symb == char('-' )) {
		cout << a - b;
	}
	else if (symb == char('*')) {
		cout << a * b;
	}
	else if (symb == char('/')) {
		if (b != 0) {
			cout << a / b;
		}
		else {
			cout << "数学错误";
		}
	}
	else if (symb == char('%')) {
		if (a != int(a) or b != int(b)) {
			cout << "数据类型错误";
		}
		else if (b == 0) {
			cout << "数学错误";
		}
		else {
			cout << int(a) % int(b);
		}
	}
	else {
		cout << "未知计算符号";
	}
}