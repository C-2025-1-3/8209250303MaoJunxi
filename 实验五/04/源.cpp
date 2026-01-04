#include<iostream>
#include"Student.h"
using namespace std;
Student maxStudent(Student& st1, Student& st2) {
	if (st1.getscore() > st2.getscore()) {
		return st1;
	}
	else {
		return st2;
	}
}
int main() {
	Student Stu_1(114514, 85.5);
	Student Stu_2(2591106, 90.0);
	Student Stu_3(330106, 78.5);
	Student Stu_4(40583411, 88.0);
	Student Stu_5(5555123, 92.5);
	Student list[5] = {
		Stu_1,
		Stu_2,
		Stu_3,
		Stu_4,
		Stu_5
	};
	Student stu = maxStudent(list[0], list[1]);
	for (int i = 2; i < 5; i++) {
		stu = maxStudent(stu, list[i]);
	}
	cout << "The student with the highest score is: ";
	stu.showID();
}