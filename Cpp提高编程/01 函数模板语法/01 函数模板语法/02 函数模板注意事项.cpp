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
//	cout << "fun�����ĵ��� " << endl;
//}
//
//
//void test01()
//{
//	int a = 10;
//	char b = 'c';
//
//
//	//1. һ��int һ��char �Ƶ�����һֱ����������
//	mySwap(a, b);
//
//	//2. ��û��T����������ʱ���ڵ���ʱ�����ָ���ſ���
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