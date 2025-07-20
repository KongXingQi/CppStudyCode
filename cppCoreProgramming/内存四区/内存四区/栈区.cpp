//#include <iostream>
//
//using namespace std;
//
//
////栈区主要是存放局部变量
//int* fun()
//{
//	int a = 100;	//局部变量存放在栈中，栈区的数据在该函数结束时自动释放。
//
//	return &a;	//ERROR千万不要返回局部变量的地址，
//}
//
//
//int main()
//{
//
//	int* a = fun();
//	
//	cout << *a << endl;
//	cout << *a << endl;
//	cout << *a << endl;
//
//
//
//
//	return 0;
//}