//#include <iostream>
//
//using namespace std;
//
//
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//1. 自动类型推导
//	mySwap(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//
//	//2. 显示指定类型
//	double c = 3.14;
//	double d = 2.50;
//	mySwap<double>(c, d);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}