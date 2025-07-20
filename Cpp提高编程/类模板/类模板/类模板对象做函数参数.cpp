#include <iostream>

using namespace std;



template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	void showPerson()
	{
		cout << "����: " << this->m_Name << " ����: " << this->m_Age << endl;
	}

	T1 m_Name;
	T2 m_Age;
};

//1. ָ�����������
void printfPerson1(Person<string, int> &p)
{
	p.showPerson();
}
void test01()
{
	Person<string, int> p("xl", 18);
	printfPerson1(p);
}
//2. ����ģ�廯
template<class T1, class T2>
void printfPerson2(Person<T1, T2> &p)
{
	p.showPerson();
	cout << "T1 ����: " << typeid(T1).name() << endl;
	cout << "T2 ����: " << typeid(T2).name() << endl;

}
void test02()
{
	Person<string, int> p("N9", 21);
	printfPerson2(p);
	
}
//3. ������ģ�廯
template<class T>
void printfPerson3(T p)
{
	p.showPerson();
	cout << "T ����: " << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int> p("DBQ", 21);
	printfPerson3(p);
}

int main()
{
	test01();
	test02();
	test03();
	return 0;
}