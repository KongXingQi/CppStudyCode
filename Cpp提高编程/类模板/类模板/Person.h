#pragma once
#include <iostream>
#include <string>
using namespace std;


//类模板
template<class T1, class T2>
class Person
{
public:
	Person(T1 name, T2 age);

	void showPerson();


	T1 m_Name;
	T2 m_Age;
};

//普通类
//class Person1
//{
//public:
//	Person1(string name, int age);
//
//	void showPerson1();
//
//
//	string m_Name;
//	int m_Age;
//};