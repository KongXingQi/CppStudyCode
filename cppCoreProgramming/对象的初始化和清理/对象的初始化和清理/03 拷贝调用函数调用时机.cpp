//#include <iostream>
//
//using namespace std;
//
////�������캯����ʹ��ʱ��
//
//
//
//
//
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age)	
//	{
//		m_Age = age; 
//		cout << "Person �вι��캯������" << endl;
//
//	}
//	Person(const Person &p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person �������캯������" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person ������������" << endl;
//	}
//
//private:
//	int m_Age;
//};
//
////1. ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//}
//
////2. ֵ���ݵķ�ʽ������������ֵ
//void doWork(Person p)
//{
//	cout << (int)&p << endl;
//
//}
//void test02()
//{
//	Person p1;
//	cout << (int)&p1 << endl;
//	doWork(p1);
//}
//
////3. ֵ��ʽ���ؾֲ�����
//
//Person doWork2()
//{
//	Person p1;
//	cout << (int) & p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	Person p1 = doWork2();
//	cout << (int)&p1 << endl;
//
//}
//
//
//int main()
//{
//
//	//test01();
//	test02();
//	
//	//test03();
//
//	return 0;
//}