//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////1. 查找内置数据类型
//void test01()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//
//
//	auto it = find(v.begin(), v.end(), 20);
//
//	if (it == v.end())
//	{
//		cout << "没有找到。" << endl;
//	}
//	else
//	{
//		cout << "找到了!" << endl;
//	}
//
//
//}
//
////2. 查找自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	bool operator==(const Person& p)
//	{
//		return this->m_Name == p.m_Name && this->m_Age == p.m_Age;
//	}
//	string m_Name;
//	int m_Age;
//};
//void test02()
//{
//	vector<Person> v;
//
//	Person p1("aaa", 11);
//	Person p2("bbb", 12);
//	Person p3("ccc", 13);
//	Person p4("ddd", 14);
//	Person p5("eee", 15);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	Person pp("ccc", 12);
//
//	auto it = find(v.begin(), v.end(), pp);
//	if (it == v.end())
//	{
//		cout << "没有找到。" << endl;
//	}
//	else
//	{
//		cout << "找到了!" << endl;
//	}
//
//}
//int main()
//{
//
//	//test01();
//	test02();
//	return 0;
//}