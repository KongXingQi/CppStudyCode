//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//
//	string m_Name;
//	int m_Age;
//};
//
//
//
//void test01()
//{
//	vector<Person> v;
//
//	Person p1("xl", 18);
//	Person p2("N9", 21);
//	Person p3("DBQ", 21);
//	Person p4("577", 18);
//	Person p5("XXiao", 21);
//	
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//
//
//	for (auto i = v.begin(); i < v.end(); i++)
//	{
//		cout << "����: " << (*i).m_Name << " ����: " << (*i).m_Age << endl;
//		cout << "����: " << i->m_Name << " ����: " << i->m_Age << endl;
//
//	}
//
//
//}
//
////����Զ����������ͣ�ָ��
//void test02()
//{
//	vector<Person*> v;
//
//	Person p1("xl", 18);
//	Person p2("N9", 21);
//	Person p3("DBQ", 21);
//	Person p4("577", 18);
//	Person p5("XXiao", 21);
//
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//
//
//	for (auto i = v.begin(); i < v.end(); i++)
//	{
//		cout << "����: " << (*i)->m_Name << " ����: " << (*i)->m_Age << endl;
//
//	}
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