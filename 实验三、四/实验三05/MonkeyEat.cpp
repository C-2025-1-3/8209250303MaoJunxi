#include <iostream>
#include "MonkeyEat.h"
using namespace std;
int PeachLeft(int Peach_before, bool &flag) {
	if (Peach_before % 2 == 0) {
		flag = true;
	}
	else
	{
		flag = false;
	}
	int Peach_after;
	Peach_after = Peach_before / 2 - 1;
	return Peach_after;
}