//#include <iostream>
//
//using namespace std;
//
//
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "����: " << this->m_Name << " ����: " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//
////1. ��ģ��û���Զ������Ƶ�ʹ�÷�ʽ
//void test01()
//{
//	//���Ǵ���ģ����������ܹ��Զ��Ƶ���
//	//Person p1("xl", 18);
//
//	//ֻ����һ�ַ�ʽ���ԡ�
//	Person<string, int> p1("kxq", 18);
//	p1.showPerson();
//}
//
//
//
////2.��ģ����ģ������б��п�����Ĭ�ϲ���
//void test02()
//{
//	Person<string> p2("dbq", 18);
//	p2.showPerson();
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}