//#include <iostream>
//#include <string>
//
//using namespace std;
//
///*
//- ����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ��
//- �������󳬳���ͨ�����ĸ����������������Լ���״̬��
//- �������������Ϊ��������
//*/
//
////1. ����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ��
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//void test01()
//{
//	MyAdd myAdd;
//	cout << myAdd(1, 1) << endl;
//}
//
//
////2. �������󳬳���ͨ�����ĸ����������������Լ���״̬
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		count = 0;
//	}
//
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//	
//	int count;
//};
//
//void test02()
//{
//	MyPrint myPrint;
//
//	myPrint("hello N9!");
//	myPrint("hello N9!");
//	myPrint("hello N9!");
//	myPrint("hello N9!");
//	myPrint("hello N9!");
//
//	cout << "myPrint ���ô���: " << myPrint.count << endl;
//}
//
////3. �������������Ϊ��������
//void doPrint(MyPrint & mp, string test)
//{
//	mp(test);
//}
//
//void test03()
//{
//	MyPrint myPrint;
//	doPrint(myPrint, "hello DBQ");
//}
//
//int main()
//{
//	test01();
//	test02();
//	test03();
//	return 0;
//}