//#include<iostream>
//
//using namespace std;
//
//
//class Person
//{
//public:
//	//无参构造函数
//	Person()
//	{
//		cout << "Person 无参构造函数的调用" << endl;
//	}
//	//有参构造函数
//	Person(int a)
//	{
//		m_age = a;	
//		cout << "Person 有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "Person 拷贝构造函数的调用" << endl;
//
//	}
//
//
//	//析构函数
//	~Person()
//	{
//		cout << "Person 析构函数的调用" << endl;
//	}
//private:
//	int m_age;
//};
//
////调用
//void test01()
//{
//	////1.括号法
//	//Person p1; //默认构造函数的调用
//	//Person p2(10);	//有参构造函数调用
//	//Person p3(p2);	//拷贝构造函数调用
//
//	//2.显示法
//	Person p1;
//	Person p2 = Person(10);	//有参构造
//	Person p3 = Person(p2);
//
//	//3.隐式转换法
//	Person p4 = 10; // 相当于 Person p4 = Person(10);
//	Person p5 = p4;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}