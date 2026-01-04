#include <iostream>
#include "shift.h"
using namespace std;
int main() {
	bool box[100] = { false };
	for (int i = 1; i < sizeof(box); i++) {
		shift(i, box);
	}
	for (int i = 0; i < sizeof(box); i++) {
		if (box[i] == true) {
			cout << i+1 << " ";
		}
	}
}