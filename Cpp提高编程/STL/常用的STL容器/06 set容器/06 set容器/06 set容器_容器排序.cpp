#include <iostream>
#include <set>

using namespace std;


class MyCompare
{
public:
	//重载一下() 注意要加const
	//不是 const 函数，意思是编译器认为这个函数可能修改类的成员变量，
	//而标准库是不允许在 const 对象上调用非 const 函数的，于是就报错了。
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}

};

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

class comparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		return p1.m_Age > p2.m_Age;
	}
};



// 1. set 存放内置数据类型
void test01()
{
	set<int> s1;

	//乱序插入
	s1.insert(10);
	s1.insert(50);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);

	//默认升序排序
	for (auto it = s1.begin(); it != s1.end(); it++)
		cout << *it << " ";
	cout << endl;

	//利用仿函数，改为降序排序
	set<int, MyCompare> s2;
	s2.insert(10);
	s2.insert(50);
	s2.insert(30);
	s2.insert(40);
	s2.insert(20);

	for (auto it = s2.begin(); it != s2.end(); it++)
		cout << *it << " ";
	cout << endl;

}


// 2. set 存放自定义数据类型
void test02()
{
	set<Person,comparePerson> s1;

	Person p1("xl", 18);
	Person p2("N9", 21);
	Person p3("Ayom", 35);
	Person p4("DBQ", 11);
	Person p5("577", 25);


	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	s1.insert(p5);

	for (auto it = s1.begin(); it != s1.end(); it++)
		cout << "姓名: " << it->m_Name << " 年龄: " << it->m_Age << endl;



}
int main()
{
	//test01(); //1.set 存放内置数据类型
	test02();	//2.set 存放自定义数据类型
	return 0;
}