#include <iostream>
#include <string>
using namespace std;

class MyPrint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};

void MyPrint02(string text)
{
	cout << text << endl;
}


void test01()
{
	MyPrint myFunc;
	myFunc("hello world");//类似于函数调用 又称仿函数
	MyPrint02("dsadsadasdas");
}

//仿函数非常灵活 没有固定的写法
//加法类

class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};


void test02()
{
	MyAdd myadd;
	int ret = myadd(10, 20);
	cout << ret << endl;


	//匿名函数对象
	cout << MyAdd()(100, 200) << endl;

}


int main()
{
	//test01();
	test02();
	return 0;
}