//#include <iostream>
//
//using namespace std;
//
//
////
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 200;
//	}
//
//	void fun()
//	{
//		cout << "Base - fun�����ĵ��� " << endl;
//	}
//
//	void fun(int a)
//	{
//		cout << "Base - fun(int)�����ĵ��� " << endl;
//	}
//
//	int m_A;
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		m_A = 100;
//	}
//
//	void fun()
//	{
//		cout << "Son - fun�����ĵ��� " << endl;
//	}
//
//	int m_A;
//};
//
//void test01()
//{
//	Son s1;
//	cout << "Son �е� m_A = " << s1.m_A << endl;
//	//���������� ���ʵ�������ͬ����Ա����Ҫ��������
//	cout << "Base �е� m_A = " << s1.Base::m_A << endl;
//
//}
//
//
//void testo2()
//{
//	Son s1;
//	s1.fun();
//	s1.Base::fun();
//
//	//��������г����˸���ͬ���ĳ�Ա����������ͬ����Ա�����ص�����������ͬ����Ա����
//	//�������ʵ������б����ص�ͬ����Ա��������Ҫ��������
//	//s1.fun(100);
//	s1.Base::fun(100);
//
//
//
//}
//int main()
//{
//	//test01();
//	testo2();
//	return 0;
//}