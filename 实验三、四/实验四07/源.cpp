#include<iostream>
using namespace std;
int* f(int list[])
{
	return list;
}
void main()
{
	int list[4] = { 1,2,3,4 };
	int* p = f(list);
	cout << p[0] << endl;
	cout << p[1] << endl;
}