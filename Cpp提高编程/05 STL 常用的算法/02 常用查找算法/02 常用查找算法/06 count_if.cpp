#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//1. 内置数据类型
class Greater2
{
public:
	bool operator()(int v)
	{
		return v > 2;
	}

};

void test01()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	int ret = count_if(v.begin(), v.end(), Greater2());
	cout << ret << endl;
}

//2. 自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};
class Greater18
{
public:
	bool operator()(const Person& p)
	{
		return p.m_Age > 18;
	}
};

void test02()
{
	vector<Person> v;
	Person p1("aaa", 13);
	Person p2("bbb", 18);
	Person p3("ccc", 22);
	Person p4("ddd", 25);
	Person p5("ddd", 31);
	Person p6("ddd", 100);


	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	v.push_back(p6);


	int ret = count_if(v.begin(), v.end(), Greater18());
	cout << ret << endl;
}

int main()
{
	//test01();
	test02();
	return 0;
}