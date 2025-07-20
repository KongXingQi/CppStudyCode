//#include <iostream>
//
//using namespace std;
//
//
////常函数
//class Person
//{
//public:
//
//	//1. 常函数
//	void fun1() const
//	{
//		//this->m_A = 10;	//	const 修饰后 连值也不可以修改
//		//this = NULL	//this指针 不可以修改指针的指向	
//		this->m_B = 10;	//若想特例修改需要使用mutable来修饰
//	}
//	void fun2()
//	{
//
//	}
//
//	int m_A;
//	mutable int m_B;	//若想特例修改需要使用mutable来修饰
//};
//
////2. 常对象
//void test01()
//{
//	const Person p1;
//	//p1.m_A = 10;	//不可以修改
//	p1.m_B = 10;	//mutable来修饰的依然可以修改
//
//	//常对象只能调用常函数
//	p1.fun1();
//	//p1.fun2();	//不能调用
//
//}
//
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}