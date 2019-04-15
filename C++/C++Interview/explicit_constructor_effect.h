#ifndef _EXPLICIT_CONSTRUCTOR_EFFECTOR_H
#define _EXPLICIT_CONSTRUCTOR_EFFECTOR_H
// 第6章 C++面向对象 面试题19 explicit构造函数的作用

#include<iostream>

class Number
{
public:
	std::string type;
	
	Number();
	explicit Number(short):type("short"){}
	Number(int):type("int"){}
	~Number();

private:

};

Number::Number() : type("void") {}


Number::~Number()
{
}

void Show(const Number& n) { std::cout << "hello" << std::endl; }
#endif