//#include <iostream>
//
//using namespace std;
//
//
//class Base
//{
//public:
//	static void fun()
//	{
//		cout << "Base - static fun()调用 " << endl;
//	}
//
//	static void fun(int a)
//	{
//		cout << "Base - static fun(int)调用 " << endl;
//	}
//
//	static int m_A;	//类内声明 类外初始化
//};
//int Base::m_A = 100;
//class Son: public Base
//{
//public:
//	static void fun()
//	{
//		cout << "Son - static fun()调用 " << endl;
//	}
//
//	static int m_A;
//};
//int Son::m_A = 200;
//
//
//void test01()
//{
//	//1. 通过对象访问
//	Son s1;
//	cout << " Son 中的 m_A = " << s1.m_A << endl;
//	cout << " Base 中的 m_A = " << s1.Base::m_A << endl;
//	//2. 通过类名访问
//	cout << "Son 中的 m_A = " << Son::m_A << endl;
//	cout << "Base 中的 m_A = " << Base::m_A << endl;
//	//第一个:: 代表类名方式访问 第二个:: 代表访问父类作用域下
//	cout << "Base 中的 m_A = " << Son::Base::m_A << endl;
//}
//void test02()
//{
//	//1.通过对象访问
//	cout << "通过对象访问" << endl;
//
//	Son s1;
//	s1.fun();
//	s1.Base::fun();
//
//	//2.通过类名访问
//	cout << "通过类名访问" << endl;
//	Son::fun();
//	Base::fun();
//	Son::Base::fun();
//	Son::Base::fun(10);
//
//}
//
//int main()
//{
//	//test01();
//	
//	test02();
//
//	return 0;
//}