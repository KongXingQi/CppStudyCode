#include <iostream>

using namespace std;

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
class Person
{
public:

	static void fun()
	{
		cout << "fun1�ĵ���" << endl;
		m_A = 100;
		//m_B = 200;	ERROR   ---  //��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	}


	static int m_A;
	int m_B;

	//Ҳ���з���Ȩ�޵�
private:
	static void fun2()
	{
		cout << "fun2�ĵ���" << endl;
		m_A = 1100;
	}
};

int Person::m_A = 10;


void test01()
{
	Person p;
	p.fun();
	cout << p.m_A << endl;

	//p.fun2()���ʲ���

}


int main()
{
	test01();


	return 0;
}