//#include <iostream>
//
//using namespace std;
//
//
//
//int fun01(int a, int b, int c)
//{
//	return a + b + c;
//}
//
//
////可以给函数参数赋默认值， 若实参无值则用默认，实参有值则用实参
////  注意 
////  1.如果形参某个位置有默认参数，则其以后的所有形参都必须有默认参数。
////	2.函数声明和实现只能有一个可以有默认参数。
//
//int fun02(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
//
//int main()
//{
//
//	cout << fun01(10, 10, 10) << endl; //30
//
//	cout << fun02(10) << endl;	// 60
//
//	cout << fun02(10, 10) << endl;	//50
//
//	cout << fun02(10, 10, 10) << endl;	//30
//
//	return 0;
//}