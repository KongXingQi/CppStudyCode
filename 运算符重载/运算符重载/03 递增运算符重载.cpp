//#include <iostream>
//
//using namespace std;
//
//class MyInteger
//{
//	friend ostream& operator<< (ostream& cout, MyInteger myInt);
//public:
//	MyInteger()
//	{
//		m_num = 0;
//	}
//
//	//重载前置++ 返回引用是为了一直对一个数据进行递增操作
//	//该函数返回参数是引用类型的， 因为前置++需要返回其本体，不可以返回副本  ++(++a)支持这种操作
//	MyInteger& operator++()
//	{
//		m_num++;
//
//		return *this;
//	}
//
//	//重载后置++
//	//该函数返回参数是引用类型的， 因为后置--需要返回其副本，不可以返回本体 (a++)++不支持这种操作
//	MyInteger operator++(int)	//int 代表占位参数 可以用于区分前置和后置递增
//	{
//		MyInteger t = *this;
//		m_num++;
//		return t;
//	}
//
//private:
//	int m_num;
//};
//
//
////重载 << 运算符
//ostream& operator<< (ostream& cout, MyInteger myInt)
//{
//	cout << myInt.m_num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myInt;
//
//	cout << myInt << endl;
//	cout << ++(++myInt) << endl;
//	cout << myInt << endl;
//
//
//}
//
//void test02()
//{
//	MyInteger myInt;
//	cout << myInt << endl;		//0
//	cout << myInt++ << endl;	// 0
//	cout << myInt << endl;	//1
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
