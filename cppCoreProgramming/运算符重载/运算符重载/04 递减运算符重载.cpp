//#include <iostream>
//
//using namespace std;
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myInt);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置-- 该函数返回参数是引用类型的， 因为前置--需要返回其本体，不可以返回副本  --(--a)支持这种操作
//	MyInteger& operator--()
//	{
//		m_Num--;
//		return *this;
//	}
//
//	//重载后置--	该函数返回参数是引用类型的， 因为后置--需要返回其副本，不可以返回本体 (a--)--不支持这种操作
//	MyInteger operator--(int)//需要占位参数
//	{
//		MyInteger t = *this;
//		m_Num--;
//		return t;
//	}
//
//private:
//	int m_Num;
//};
//
//
////重载<<运算符
//ostream& operator<<(ostream& cout, MyInteger myInt)
//{
//	cout << myInt.m_Num;
//	return cout;
//}
//
//
//void test01()
//{
//	MyInteger myInt;
//	cout << myInt << endl;
//	cout << --(--myInt) << endl;
//	cout << myInt << endl;
//
//}
//void test02()
//{
//	MyInteger myInt;
//	cout << myInt << endl;
//	cout << myInt-- << endl;
//	cout << myInt << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}