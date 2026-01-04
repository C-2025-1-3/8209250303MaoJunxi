#include <iostream>
#include "shift.h"
using namespace std;
void shift(int no, bool box[]) {
	for (int i = no - 1; i < 100; i += no) {
		box[i] = !box[i];
	}
}