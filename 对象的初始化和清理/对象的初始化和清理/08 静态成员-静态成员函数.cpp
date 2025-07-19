#include <iostream>

using namespace std;

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
class Person
{
public:

	static void fun()
	{
		cout << "fun1的调用" << endl;
		m_A = 100;
		//m_B = 200;	ERROR   ---  //静态成员函数只能访问静态成员变量
	}


	static int m_A;
	int m_B;

	//也是有访问权限的
private:
	static void fun2()
	{
		cout << "fun2的调用" << endl;
		m_A = 1100;
	}
};

int Person::m_A = 10;


void test01()
{
	Person p;
	p.fun();
	cout << p.m_A << endl;

	//p.fun2()访问不了

}


int main()
{
	test01();


	return 0;
}