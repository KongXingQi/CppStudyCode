//#include <iostream>
//
//using namespace std;
//
//
//class Base
//{
//public:
//	virtual void fun() = 0;
//};
//
//
//class Son :public Base
//{
//public:
//	virtual void fun()
//	{
//		cout << "fun函数的调用 " << endl;
//	}
//};
//
//
//void test01()
//{
//	//1.抽象类无法示例化对象
//	//Base b;	//error
//	//new Base;	//	error
//
//	//2.子类必须重写父类中的纯虚函数，否则无法实例化对象 也属于抽象类。
//	//Son s;	//
//
//
//	Base* b = new Son;
//
//	b->fun();
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}