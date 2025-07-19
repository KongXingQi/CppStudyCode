//#include <iostream>
//
//using namespace std;
//
////拷贝构造函数的使用时机
//
//
//
//
//
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person 默认构造函数调用" << endl;
//	}
//	Person(int age)	
//	{
//		m_Age = age; 
//		cout << "Person 有参构造函数调用" << endl;
//
//	}
//	Person(const Person &p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person 拷贝构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person 析构函数调用" << endl;
//	}
//
//private:
//	int m_Age;
//};
//
////1. 使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//}
//
////2. 值传递的方式给函数参数传值
//void doWork(Person p)
//{
//	cout << (int)&p << endl;
//
//}
//void test02()
//{
//	Person p1;
//	cout << (int)&p1 << endl;
//	doWork(p1);
//}
//
////3. 值方式返回局部对象
//
//Person doWork2()
//{
//	Person p1;
//	cout << (int) & p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	Person p1 = doWork2();
//	cout << (int)&p1 << endl;
//
//}
//
//
//int main()
//{
//
//	//test01();
//	test02();
//	
//	//test03();
//
//	return 0;
//}