//#include <iostream>
//
//using namespace std;
//
//
////��̬��Ա����
////���ж�����ͬһ������
////�ڱ���׶η����ڴ�
////���������������ʼ��
//
//class Person
//{
//public:
//	static int m_A;
//
//	
//	//��̬��Ա����Ҳ���з���Ȩ�޵� ��粻�÷���
//private:
//	static int m_B;
//};
//int Person:: m_A = 100;
//
//
//void test01()
//{
//	Person p1;
//	cout << p1.m_A << endl;
//	Person p2;
//	p2.m_A = 200;
//	cout << p2.m_A << endl;
//
//}
//
////��̬��Ա������ĳ�������ϣ����ж��󶼹���һ������
////��˾�̬��Ա���������ַ��ʷ�ʽ
//void test02()
//{
//	//1. ͨ��������з���
//	Person p1;
//	cout << p1.m_A << endl;
//
//	//2. ͨ���������з���
//	cout << Person::m_A << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}