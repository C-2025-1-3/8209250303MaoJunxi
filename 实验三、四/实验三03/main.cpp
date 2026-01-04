#include <iostream>
#include "mytemperature.h"
using namespace std;
int main() {
	cout << "Celsius       Fahrenheit   |   Fahrenheit       Celsius" << endl;
	for (int i = 0; i < 10; i++) {
		cout << 40 - i << "       " << celsius_to_fah(40 - i) << "    |    " << 120 - i * 10 << "       " << fahrenheit_to_cels(120 - i * 10)<<endl;
	}
}