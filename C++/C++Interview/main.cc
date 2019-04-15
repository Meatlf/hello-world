/*

作者：tztang

参考资料：
[C和C++程序员面试秘笈]

日期：
2019-04-14
*/

#include <iostream>
#include"diff_class_and_struct.h"
#include"static_memory.h"
#include"global_object.h"
#include"constructor_explicit.h"
#include"explicit_constructor_effect.h"

using namespace std;

Test a;			// 全局变量

int main(void) {
	CPoint cpt(1, 2);

	//SPoint spt(3, 4);

	// std::cout << cpt.x << " " << cpt.y << std::endl;	// 编译错误
	// cpt.print();	// 编译错误
	cpt.print1();	// 合法

					//spt.print();	// 合法
					//spt.print1();	// 编译错误
					//std::cout << spt.x << " " << spt.y << std::endl;	// 合法

	test t(2);
	t.func1();
	t.func2();

	std::cout << "main() start" << std::endl;
	Test b;	// 局部变量

	Test1 t1 = 12;	// 隐式调用其构造函数，成功
	//Test2 t2 = 12;	// 编译错误，不能隐式调用其构造函数
	Test2 t3(12);	// 显示调用成功

	short s = 42;
	Show(s);

	return 0;
}