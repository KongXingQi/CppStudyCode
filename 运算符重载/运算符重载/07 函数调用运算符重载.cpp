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
	myFunc("hello world");//�����ں������� �ֳƷº���
	MyPrint02("dsadsadasdas");
}

//�º����ǳ���� û�й̶���д��
//�ӷ���

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


	//������������
	cout << MyAdd()(100, 200) << endl;

}


int main()
{
	//test01();
	test02();
	return 0;
}