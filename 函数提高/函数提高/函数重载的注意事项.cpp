#include <iostream>

using namespace std;


//�������ص�ע������
//1. ������Ϊ���ص�����

void fun(int& a)
{
	cout << "fun(int &a)�ĵ���" << endl;
}

void fun(const int& a)
{
	cout << "fun(const int &a)�ĵ���" << endl;
}

//2. ������������Ĭ�ϲ���
void fun2(int a, int b = 20)
{
	cout << "fun2(int a, int b = 20)�ĵ���" << endl;
}

void fun2(int a)
{
	cout << "fun2(int a)�ĵ���" << endl;
}


int main()
{
	//1.
	int a = 10;
	fun(a);
	fun(10);

	//fun2(10, 20)	//true
	//fun2(10);		//error �����˶�����


	return 0;
}