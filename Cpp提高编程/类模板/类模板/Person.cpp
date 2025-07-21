#include "Person.h"


//类模板函数类外实现
template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	this->m_Name = name;
	this->m_Age = age;
}
template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "姓名: " << this->m_Name << " 年龄: " << this->m_Age << endl;
}


////普通类函数类外实现
//Person1::Person1(string name, int age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//
//void Person1::showPerson1()
//{
//	cout << "姓名: " << this->m_Name << " 年龄: " << this->m_Age << endl;
//}