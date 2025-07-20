//#include <iostream>
//
//using namespace std;
//
//
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
//template<typename T>
//T myAdd02(T a,T b)
//{
//	return a + b;
//}
//
//
//void test01()
//{
//	int a = 10;
//	char b = 'a';// (int)b = 97
//	cout << "a + b = " << myAdd01(a, b) << endl; //： 10 + 97 = 107
//
//
//	//自动类型推导
//	cout << "a + b = " << myAdd02(a, b) << endl;
//
//	//显示类型指定
//	cout << "a + b = " << myAdd02<int>(a, b) << endl;//： 10 + 97 = 107
//}
//
//int main()
//{
//	test01();
//	return 0;
//}