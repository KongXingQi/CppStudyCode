//#include <iostream>
//
//using namespace std;
//
//template<typename T>
//void mySwap(T a, T b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//
//template<typename T>
//void fun()
//{
//	cout << "fun函数的调用 " << endl;
//}
//
//
//void test01()
//{
//	int a = 10;
//	char b = 'c';
//
//
//	//1. 一个int 一个char 推导不出一直的数据类型
//	mySwap(a, b);
//
//	//2. 在没有T的数据类型时候，在调用时候必须指定才可以
//	fun();
//
//	fun<int>();
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}