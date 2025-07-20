//#include <iostream>
//
//using namespace std;
//
//
////
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 200;
//	}
//
//	void fun()
//	{
//		cout << "Base - fun函数的调用 " << endl;
//	}
//
//	void fun(int a)
//	{
//		cout << "Base - fun(int)函数的调用 " << endl;
//	}
//
//	int m_A;
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		m_A = 100;
//	}
//
//	void fun()
//	{
//		cout << "Son - fun函数的调用 " << endl;
//	}
//
//	int m_A;
//};
//
//void test01()
//{
//	Son s1;
//	cout << "Son 中的 m_A = " << s1.m_A << endl;
//	//如果子类对象 访问到父类中同名成员，需要加作用域
//	cout << "Base 中的 m_A = " << s1.Base::m_A << endl;
//
//}
//
//
//void testo2()
//{
//	Son s1;
//	s1.fun();
//	s1.Base::fun();
//
//	//如果子类中出现了父类同名的成员函数，子类同名成员会隐藏掉父类中所有同名成员函数
//	//如果想访问到父类中被隐藏的同名成员函数，需要加作用域。
//	//s1.fun(100);
//	s1.Base::fun(100);
//
//
//
//}
//int main()
//{
//	//test01();
//	testo2();
//	return 0;
//}