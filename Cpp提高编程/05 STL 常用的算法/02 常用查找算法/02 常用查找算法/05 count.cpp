//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//
////1. ͳ��������������
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(2);
//	v.push_back(2);
//	v.push_back(3);
//
//	int ret = count(v.begin(), v.end(), 2);
//
//	cout << ret << endl;
//
//}
//
////2. ͳ���Զ�����������
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->n_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(const Person& p)
//	{
//		return this->m_Age == p.m_Age;
//	}
//
//	string n_Name;
//	int m_Age;
//};
//void test02()
//{
//	vector<Person> v;
//
//	Person p1("xl", 21);
//	Person p2("N9", 21);
//	Person p3("DBQ", 21);
//	Person p4("Ayom", 25);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	Person p5("577", 21);
//	int ret = count(v.begin(), v.end(), p5);
//
//	cout << "��" << p5.n_Name << "ͬ�����: " << ret << " ��" << endl;
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