//#include <iostream>
//
//using namespace std;
//
//
//class Base
//{
//public:
//	static void fun()
//	{
//		cout << "Base - static fun()���� " << endl;
//	}
//
//	static void fun(int a)
//	{
//		cout << "Base - static fun(int)���� " << endl;
//	}
//
//	static int m_A;	//�������� �����ʼ��
//};
//int Base::m_A = 100;
//class Son: public Base
//{
//public:
//	static void fun()
//	{
//		cout << "Son - static fun()���� " << endl;
//	}
//
//	static int m_A;
//};
//int Son::m_A = 200;
//
//
//void test01()
//{
//	//1. ͨ���������
//	Son s1;
//	cout << " Son �е� m_A = " << s1.m_A << endl;
//	cout << " Base �е� m_A = " << s1.Base::m_A << endl;
//	//2. ͨ����������
//	cout << "Son �е� m_A = " << Son::m_A << endl;
//	cout << "Base �е� m_A = " << Base::m_A << endl;
//	//��һ��:: ����������ʽ���� �ڶ���:: ������ʸ�����������
//	cout << "Base �е� m_A = " << Son::Base::m_A << endl;
//}
//void test02()
//{
//	//1.ͨ���������
//	cout << "ͨ���������" << endl;
//
//	Son s1;
//	s1.fun();
//	s1.Base::fun();
//
//	//2.ͨ����������
//	cout << "ͨ����������" << endl;
//	Son::fun();
//	Base::fun();
//	Son::Base::fun();
//	Son::Base::fun(10);
//
//}
//
//int main()
//{
//	//test01();
//	
//	test02();
//
//	return 0;
//}