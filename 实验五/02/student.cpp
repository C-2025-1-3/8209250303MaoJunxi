//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include"student.h"  
void Student::display()
{
   std::cout << "num：" << num << std::endl;
   std::cout << "name：" << name << std::endl;
   std::cout << "sex：" << sex << std::endl;
}
void Student::set_value()
{
	std::cout << "请输入学号：";
	std::cin >> num;
	std::cout << "请输入姓名：";
	std::cin >> name;
	std::cout << "请输入性别：";
	std::cin >> sex;
}