//#include <iostream>
//
//using namespace std;
//
//
//class Base
//{
//public:
//	virtual void fun() = 0;
//};
//
//
//class Son :public Base
//{
//public:
//	virtual void fun()
//	{
//		cout << "fun�����ĵ��� " << endl;
//	}
//};
//
//
//void test01()
//{
//	//1.�������޷�ʾ��������
//	//Base b;	//error
//	//new Base;	//	error
//
//	//2.���������д�����еĴ��麯���������޷�ʵ�������� Ҳ���ڳ����ࡣ
//	//Son s;	//
//
//
//	Base* b = new Son;
//
//	b->fun();
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}