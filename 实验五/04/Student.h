#pragma once
#include <iostream>
class Student {
private:
	int id;
	double score;
public:
	void showID() {
		std::cout << "id: " << id << std::endl;
	}
	int getscore() {
		return score;
	}
	Student(int i, double s) :id(i), score(s) {}
};