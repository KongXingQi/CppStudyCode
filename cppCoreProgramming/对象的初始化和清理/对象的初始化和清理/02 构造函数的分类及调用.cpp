//#include<iostream>
//
//using namespace std;
//
//
//class Person
//{
//public:
//	//�޲ι��캯��
//	Person()
//	{
//		cout << "Person �޲ι��캯���ĵ���" << endl;
//	}
//	//�вι��캯��
//	Person(int a)
//	{
//		m_age = a;	
//		cout << "Person �вι��캯���ĵ���" << endl;
//	}
//	//�������캯��
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "Person �������캯���ĵ���" << endl;
//
//	}
//
//
//	//��������
//	~Person()
//	{
//		cout << "Person ���������ĵ���" << endl;
//	}
//private:
//	int m_age;
//};
//
////����
//void test01()
//{
//	////1.���ŷ�
//	//Person p1; //Ĭ�Ϲ��캯���ĵ���
//	//Person p2(10);	//�вι��캯������
//	//Person p3(p2);	//�������캯������
//
//	//2.��ʾ��
//	Person p1;
//	Person p2 = Person(10);	//�вι���
//	Person p3 = Person(p2);
//
//	//3.��ʽת����
//	Person p4 = 10; // �൱�� Person p4 = Person(10);
//	Person p5 = p4;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}