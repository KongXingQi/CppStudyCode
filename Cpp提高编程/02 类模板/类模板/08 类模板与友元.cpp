#include <iostream>
#include <string>

using namespace std;

//�������֪��Person
template<class T1, class T2>
class Person;

//ȫ�ֺ��� ����ʵ��
template<class T1, class T2>
void printfPerson2(Person<T1, T2> p)
{
	cout << "����: " << p.m_Name << " ����: " << p.m_Age << endl;
}

template<class T1, class T2>
class Person
{
	//ȫ�ֺ��� ����ʵ��
	friend void printfPerson(Person<T1, T2> p)
	{
		cout << "����: " << p.m_Name << " ����: " << p.m_Age << endl;
	}
	//ȫ�ֺ��� ����ʵ��
	//�ӿ�ģ��Ĳ����б�
	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪�� �⺯���Ĵ���
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