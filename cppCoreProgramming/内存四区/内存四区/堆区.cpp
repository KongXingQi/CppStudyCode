//#include <iostream>
//
//using namespace std;
//
//
//int* fun()
//{
//	int* p = new int(1001000);	//new开辟出来的在堆区上，所以函数结束不会释放。
//
//	//cout << (int)p << endl;
//	return p;
//}
//
//
//int main()
//{
//	int* p = fun();
//
//
//	//cout << (int)p << endl;
//
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//	cout << *p << endl;
//
//
//	return 0;		//程序结束后，new没有手动释放，则系统自动回收。
//}