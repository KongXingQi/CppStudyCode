//#include <iostream>
//
//using namespace std;
//
//
////ǳ���������������
//
//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "Ĭ�Ϲ��캯������" << endl;
//	}
//	//�в�
//	Person(int age, int hight)
//	{
//		m_Age = age;
//		m_Hight = new int(hight);
//	}
//
//
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		//m_Hight = p.m_Hight ǳ����
//
//		//���
//		m_Hight = new int(*p.m_Hight);
//		cout << "�������캯������" << endl;
//
//	}
//	
//
//	//��������
//	~Person()
//	{
//		if (m_Hight != NULL)
//		{
//			delete(m_Hight);
//		}
//
//		cout << "������������" << endl;
//	}
//
//
//	int m_Age;
//	int* m_Hight;
//};
//
//void test01()
//{
//	Person p1(18, 210);
//	cout << "p1�������� " << p1.m_Age << "p1������� " << *(p1.m_Hight) << endl;
//	Person p2(p1);
//	cout << "p2�������� " << p2.m_Age << "p2������� " << *(p2.m_Hight) << endl;
//
//
//}
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}