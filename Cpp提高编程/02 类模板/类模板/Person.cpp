#include "Person.h"


//��ģ�庯������ʵ��
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "����: " << this->m_Name << " ����: " << this->m_Age << endl;
}


////��ͨ�ຯ������ʵ��
//Person1::Person1(string name, int age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//
//void Person1::showPerson1()
//{
//	cout << "����: " << this->m_Name << " ����: " << this->m_Age << endl;
//}