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
////1. 查找内置数据类型
//// 函数方式
////bool CreateFive(int val)
////{
////	return val > 5;
////}
//
////谓词方式
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
//		cout << "找不到" << endl;
//	}
//	else
//	{
//		cout << "找到了大于5的数为: " << *it << endl;
//	}
//	
//}
//
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
//		cout << "没找到!" << endl;
//	}
//	else
//	{
//		cout << "找到了 姓名: " << it->m_Name << " 年龄: " << it->m_Age << endl;
//	}
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}