#include <iostream>

using namespace std;


//函数重载的注意事项
//1. 引用作为重载的条件

void fun(int& a)
{
	cout << "fun(int &a)的调用" << endl;
}

void fun(const int& a)
{
	cout << "fun(const int &a)的调用" << endl;
}

//2. 函数重载碰上默认参数
void fun2(int a, int b = 20)
{
	cout << "fun2(int a, int b = 20)的调用" << endl;
}

void fun2(int a)
{
	cout << "fun2(int a)的调用" << endl;
}


int main()
{
	//1.
	int a = 10;
	fun(a);
	fun(10);

	//fun2(10, 20)	//true
	//fun2(10);		//error 出现了二义性


	return 0;
}