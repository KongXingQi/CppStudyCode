//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//
//	Person& PersonAddAge(const Person& p)
//	{
//		this->age += p.age;
//		return *this;		// ���ڷ���������Person& ���Ƿ��ص�p2 ���� ����һֱ���ӵ��޸�
//							// �������������Person ����һֱ����p2' p2'' p2''' p2�ĸ��ư�
//	}
//
//	//Person* PersonAddAge(const Person& p)
//	//{
//	//	this->age += p.age;
//	//	return this;
//	//}
//
//	int age;
//};
//
////1.������Ƴ�ͻ
//void test01()
//{
//	Person p1(10);
//
//	cout << "p1������ " << p1.age << endl;
//
//}
//
////2. ���ض�������*this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//
//	//��ʽ���
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	//p2.PersonAddAge(p1)->PersonAddAge(p1)->PersonAddAge(p1);
//
//	cout << "p2������ " << p2.age << endl;
//
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}