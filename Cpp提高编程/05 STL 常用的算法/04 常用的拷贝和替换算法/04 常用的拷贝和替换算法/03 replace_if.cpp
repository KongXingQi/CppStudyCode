//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//
//class Greater2
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 2;
//	}
//
//};
//
////1. 内置数据类型
//void test01()
//{
//	vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//	v1.push_back(5);
//	for (auto it = v1.begin(); it != v1.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//
//	replace_if(v1.begin(), v1.end(), Greater2(), 2);
//
//	for (auto it = v1.begin(); it != v1.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//
////2. 自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//class Greater18
//{
//public:
//	bool operator()(const Person& p)
//	{
//		return p.m_Age > 18;
//	}
//};
//
//
//void test02()
//{
//	vector<Person> v;
//	Person p1("aaa", 18);
//	Person p2("aaa", 21);
//	Person p3("aaa", 30);
//	Person p4("aaa", 12);
//	Person p5("aaa", 13);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	for (auto it = v.begin(); it != v.end(); it++)
//		cout << "姓名:" << it->m_Name << " 年龄: " << it->m_Age;
//	cout << endl;
//
//
//
//	Person pp("ccc", 18);
//	replace_if(v.begin(), v.end(), Greater18(), pp);
//
//	for (auto it = v.begin(); it != v.end(); it++)
//		cout << "姓名:" << it->m_Name << " 年龄: " << it->m_Age;
//	cout << endl;
//
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}