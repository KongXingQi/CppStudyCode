//#include <iostream>
//
//using namespace std;
//
//
////浅拷贝和深拷贝的区别
//
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "默认构造函数调用" << endl;
//	}
//	//有参
//	Person(int age, int hight)
//	{
//		m_Age = age;
//		m_Hight = new int(hight);
//	}
//
//
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		//m_Hight = p.m_Hight 浅拷贝
//
//		//深拷贝
//		m_Hight = new int(*p.m_Hight);
//		cout << "拷贝构造函数调用" << endl;
//
//	}
//	
//
//	//析构函数
//	~Person()
//	{
//		if (m_Hight != NULL)
//		{
//			delete(m_Hight);
//		}
//
//		cout << "析构函数调用" << endl;
//	}
//
//
//	int m_Age;
//	int* m_Hight;
//};
//
//void test01()
//{
//	Person p1(18, 210);
//	cout << "p1的年龄是 " << p1.m_Age << "p1的身高是 " << *(p1.m_Hight) << endl;
//	Person p2(p1);
//	cout << "p2的年龄是 " << p2.m_Age << "p2的身高是 " << *(p2.m_Hight) << endl;
//
//
//}
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}