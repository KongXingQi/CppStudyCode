//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//
//
//
////1. ����������������
//// ������ʽ
////bool CreateFive(int val)
////{
////	return val > 5;
////}
//
////ν�ʷ�ʽ
//class CreateFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//
//	auto it = find_if(v.begin(), v.end(), CreateFive());
//	if (it == v.end())
//	{
//		cout << "�Ҳ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��˴���5����Ϊ: " << *it << endl;
//	}
//	
//}
//
//
////2. �����Զ�����������
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
//class Greater20
//{
//public:
//	bool operator()(const Person& p)
//	{
//		return p.m_Age > 20;
//	}
//};
//
//void test02()
//{
//	vector<Person> v;
//	Person p1("aaa", 10);
//	Person p2("bbb", 21);
//	Person p3("ccc", 15);
//	Person p4("ddd", 40);
//
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	auto it = find_if(v.begin(), v.end(), Greater20());
//	if (it == v.end())
//	{
//		cout << "û�ҵ�!" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��� ����: " << it->m_Name << " ����: " << it->m_Age << endl;
//	}
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}