//#include <iostream>
//
//using namespace std;
//
//
////静态成员变量
////所有对象共享同一份数据
////在编译阶段分配内存
////类内声明，类外初始化
//
//class Person
//{
//public:
//	static int m_A;
//
//	
//	//静态成员变量也是有访问权限的 外界不让访问
//private:
//	static int m_B;
//};
//int Person:: m_A = 100;
//
//
//void test01()
//{
//	Person p1;
//	cout << p1.m_A << endl;
//	Person p2;
//	p2.m_A = 200;
//	cout << p2.m_A << endl;
//
//}
//
////静态成员不属于某个对象上，所有对象都共享一份数据
////因此静态成员变量有两种访问方式
//void test02()
//{
//	//1. 通过对象进行访问
//	Person p1;
//	cout << p1.m_A << endl;
//
//	//2. 通过类名进行访问
//	cout << Person::m_A << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}