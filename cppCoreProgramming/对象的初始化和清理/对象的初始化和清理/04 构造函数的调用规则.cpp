//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	//构造函数
//	//Person()
//	//{
//	//	cout << "构造函数调用" << endl;
//	//}
//	//有参构造函数
//	//Person(int age)
//	//{
//	//	m_Age = age;
//	//	cout << "有参构造函数调用" << endl;
//	//}
//
//	//拷贝函数
//	Person(const Person &p)
//	{
//		cout << "拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//	}
//	//析构函数
//	//~Person()
//	//{
//	//	cout << "析构函数调用" << endl;
//	//}
//
//	int m_Age;
//};
////1. C++中创建一个类，编译器会自动提供三个函数
////	默认构造函数	（空实现）
////	析构函数		（空实现）
////	拷贝函数		（值拷贝）
////void test01()
////{
////	Person p1;
////	p1.m_Age = 18;
////	Person p2(p1);
////	cout << "p2的年龄是 " << p2.m_Age << endl;
////}
//
////2. 如果我们写了有参构造函数，编译器就不再提供默认构造，但却依然提供拷贝构造。
//void test02()
//{
//	Person p1;
//
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