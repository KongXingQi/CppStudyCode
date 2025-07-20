//#include <iostream>
//
//using namespace std;
//
//
//class Person
//{
//public:
//
//	void fun1()
//	{
//		cout << "fun1 函数调用" << endl;
//	}
//
//	void fun2()
//	{
//		if (this == NULL)
//			return;
//
//		// 属性在调用的时候默认前面有一个this，即this->mAge
//		// 所以当对象p1为NULL时候 this 也是NULL 对其进行操作就会报错。
//		cout << "fun2 函数调用 年龄:" << m_Age << endl; 
//	}
//
//
//
//	int m_Age;
//};
//
//
//void test01()
//{
//	Person* p1 = NULL;
//	p1->fun1();
//	p1->fun2();
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}