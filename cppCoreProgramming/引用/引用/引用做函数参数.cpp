//#include <iostream>
//
//using namespace std;
//
//
////��ֵ
//void mySwap01(int a, int b)
//{
//	int t = a;
//	a = b;
//	b = t;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//}
////��ַ
//void mySwap02(int* a, int* b)
//{
//	int t = *a;
//	*a = *b;
//	*b = t;
//
//}
////���ô���
//void mySwap03(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//	//mySwap01(a,b);
//
//	//mySwap02(&a, &b);
//
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << endl;
//
//	mySwap03(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//
//	return 0;
//}