//#include <iostream>
//
//using namespace std;
//
////函数重载满足条件
////1.同一个作用域下
////2.函数名称相同
////3.函数参数类型不同，或者个数不同，或者顺序不同
//
//void fun()
//{
//	cout << "fun()的调用" << endl;
//}
//
//void fun(int a)
//{
//	cout << "fun(int)的调用" << endl;
//}void fun(double a)
//{
//	cout << "fun(double)的调用" << endl;
//}void fun(int a, double b)
//{
//	cout << "fun(int, double)的调用" << endl;
//}void fun(double a, int b)
//{
//	cout << "fun(double, int)的调用" << endl;
//}
//
//int main()
//{
//	fun();
//	fun(1);
//	fun(1.1);
//	fun(1, 1.1);
//	fun(1.1, 1);
//
//	return 0;
//}