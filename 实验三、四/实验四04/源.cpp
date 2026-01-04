#include<iostream>
#include<algorithm>
using namespace std;
void merge(int list1[], int size1, int list2[], int size2, int list[]) {
	for (int i = 0; i < size1; i++) {
		list[i] = list1[i];
	}
	for (int i = size1; i < size1 + size2; i++) {
		list[i] = list2[i - size1];
	}
}
int main() {
	int list1[10] = { 0 };
	int list2[10] = { 0 };
	int list[20] = { 0 };
	cout << "Enter list1:";
	for (int i = 0; i < sizeof(list1)/sizeof(list1[0]); i++) {
		cin >> list1[i];
	}
	cout << "Enter list2:";
	for (int i = 0; i < sizeof(list2)/sizeof(list2[0]); i++) {
		cin >> list2[i];
	}
    merge(list1, sizeof(list1)/sizeof(list1[0]), list2, sizeof(list2)/sizeof(list2[0]), list);
    int total = sizeof(list) / sizeof(list[0]);
    std::sort(list, list + total);
	for (int i = 0; i < sizeof(list)/sizeof(list[0]); i++) {
			cout << list[i] << " ";
	}
	return 0;
}