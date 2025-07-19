//#include <iostream>
//
//using namespace std;
//
////成员变量和成员函数是分开存储的
//
//
//class Person
//{
//	int m_A;	//非静态成员变量 属于类的对象上
//	static int m_B;		//静态成员变量 不属于类的对象上
//
//	void fun()		//非静态成员函数
//	{
//
//	}
//	static void fun2() //静态的成员函数
//	{
//
//	}
//
//
//};
//
////类内声明 类外初始化
//int Person::m_B = 0;
//void test01()
//{
//	Person p;
//	//空对象占用内存空间为1
//	cout << "p 占用内存空间为 " << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//
//	cout << "p 占用内存空间为 " << sizeof(p) << endl;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}