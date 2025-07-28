#include <iostream>
#include <string>

using namespace std;

//让下面的知道Person
template<class T1, class T2>
class Person;

//全局函数 类外实现
template<class T1, class T2>
void printfPerson2(Person<T1, T2> p)
{
	cout << "姓名: " << p.m_Name << " 年龄: " << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	//全局函数 类内实现
	friend void printfPerson(Person<T1, T2> p)
	{
		cout << "姓名: " << p.m_Name << " 年龄: " << p.m_Age << endl;
	}
	//全局函数 类外实现
	//加空模板的参数列表
	//如果全局函数是类外实现，需要让编译器提前知道 这函数的存在
	friend void printfPerson2<>(Person<T1, T2> p);

public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

private:
	T1 m_Name;
	T2 m_Age;
};



void test01()
{
	Person<string, int> p("xl", 18);
	printfPerson(p);


	Person<string, int> p2("n9", 21);
	printfPerson2(p2);

}

int main()
{
	test01();
	return 0; 
}