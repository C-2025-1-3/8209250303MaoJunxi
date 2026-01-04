#pragma once
#include <string>
using namespace std;
class Student
{
public:
	void display();
	void set_value();
	Student()
	{
		num = 0;
		name = "unknown";
		sex = '0';
	}
	Student(int n, string Name, char gender)
	{
		num = n;
		name = Name;
		sex = gender;
	}
private:
	int num;
	string name;
	char sex;
};