//#include <iostream>
//
//using namespace std;
//
//
//template<class T>
//class Base
//{
//public:
//
//	T m_A;
//};
//
////1. 当子类继承的父类是一个类模板是，子类在声明的时候，要指定出父类中T的类型
//class Son1 :public Base<int>
//{
//
//};
//
////2. 如果想灵活指定出父类中T的类型，子类也需要变为类模板
//template<class T1, class T2>
//class Son2 :public Base<T2>
//{
//public:
//
//	T1 m_A;
//};
//
//void test01()
//{
//	Son1 s1;
//	Son2<int, char> s2;
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}