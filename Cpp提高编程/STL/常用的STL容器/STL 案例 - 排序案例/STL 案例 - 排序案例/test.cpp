#include <iostream>
#include <list>

using namespace std;

class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}

	
	string m_Name;
	int m_Age;
	int m_Height;
};

void printList(const list<Person>& l1)
{
	for (auto it = l1.begin(); it != l1.end(); it++)
		cout << "����: " << (*it).m_Name << " ����: " << (*it).m_Age << " ���: " << it->m_Height << endl;

	cout << endl;
}

bool myCompare(Person& p1, Person& p2)
{
	//���������������� ���������ͬ ������߽�������
	if (p1.m_Age == p2.m_Age)
		return p1.m_Height > p2.m_Height;
	else
		return p1.m_Age < p2.m_Age;
}

void test01()
{
	list<Person> l1;

	Person p1("xl", 35, 175);
	Person p2("N9", 45, 180);
	Person p3("DBQ", 40, 170);
	Person p4("577", 25, 190);
	Person p5("XXiao", 35, 160);
	Person p6("YDS", 35, 200);

	l1.push_back(p1);
	l1.push_back(p2);
	l1.push_back(p3);
	l1.push_back(p4);
	l1.push_back(p5);
	l1.push_back(p6);


	cout << "����ǰ: " << endl;
	printList(l1);
	cout << "-------------------------" << endl;
	l1.sort(myCompare);
	printList(l1);

}

int main()
{
	test01();
	return 0;
}