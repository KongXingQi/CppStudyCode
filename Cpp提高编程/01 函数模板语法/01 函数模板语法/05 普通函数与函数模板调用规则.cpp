//#include <iostream>
//
//using namespace std;
//
//
//
//void myPrintf(int a, int b)
//{
//	cout << "普通函数的调用!" << endl;
//}
//
//template<typename T>
//void myPrintf(T a, T b)
//{
//	cout << "函数模板的调用!" << endl;
//}
//
//template<typename T>
//void myPrintf(T a, T b, T c)
//{
//	cout << "函数模板重载的调用!" << endl;
//}
//
//
////1.如果普通函数和函数模板都实现，优先调用普通函数。
//void test01()
//{
//	int a = 0, b = 0;
//	myPrintf(a, b); 
//}
//
//
////2. 可以通过空模板参数列表来强制调用函数模板
////3. 函数模板也可以发生重载
//void test02()
//{
//	int a = 0, b = 0;
//	myPrintf<>(a, b);
//
//	myPrintf<>(a, b, 10);
//}
//
//
////4.如果函数模板可以产生更好的匹配，优先调用函数模板
////因为如果调用普通函数是需要进行隐式类型转换的。 
//void test04()
//{
//	char c1 = 'a', c2 = 'b';
//
//	myPrintf(c1, c2);
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test04();
//	return 0;
//}