//#include <iostream>
//
//using namespace std;
//
//
////������
//class Person
//{
//public:
//
//	//1. ������
//	void fun1() const
//	{
//		//this->m_A = 10;	//	const ���κ� ��ֵҲ�������޸�
//		//this = NULL	//thisָ�� �������޸�ָ���ָ��	
//		this->m_B = 10;	//���������޸���Ҫʹ��mutable������
//	}
//	void fun2()
//	{
//
//	}
//
//	int m_A;
//	mutable int m_B;	//���������޸���Ҫʹ��mutable������
//};
//
////2. ������
//void test01()
//{
//	const Person p1;
//	//p1.m_A = 10;	//�������޸�
//	p1.m_B = 10;	//mutable�����ε���Ȼ�����޸�
//
//	//������ֻ�ܵ��ó�����
//	p1.fun1();
//	//p1.fun2();	//���ܵ���
//
//}
//
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}