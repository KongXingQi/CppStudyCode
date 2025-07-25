#include <iostream>
#include <string>
#include <queue>

using namespace std;

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




void test01()
{
	queue<Person> q;
	Person p1("xl", 18);
	Person p2("N9", 19);
	Person p3("DBQ", 20);
	Person p4("XXiao", 21);
	Person p5("baby", 22);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	q.push(p5);


	cout << "�����еĴ�СΪ:d " << q.size() << endl;
	while (!q.empty())
	{
		cout << "����Ԫ��: " << "����: " << q.front().m_Name << " ����: " << q.front().m_Age << endl;
		cout << "��βԪ��: " << "����: " << q.back().m_Name << " ����: " << q.back().m_Age << endl;

		q.pop();
	}

	cout << "�����еĴ�СΪ: " << q.size() << endl;
}

int main()
{
	test01();
	return 0;
}