//#include <iostream>
//using namespace std;
//int& fun()
//{
//	static int a = 10;
//
//	return a;
//}
////int* fun2()
////{
////	static int a = 20;
////
////	return &a;
////}
//int main()
//{
//
//	//ÒıÓÃ
//	int& b = fun();
//	cout << b << endl;
//	fun() = 100;
//	cout << b << endl;
//
//	////Ö¸Õë
//	//int* c = fun2();
//	//cout << *c << endl;
//	//(*fun2()) = 200; //
//	//cout << *c << endl;
//
//	return 0;
//}