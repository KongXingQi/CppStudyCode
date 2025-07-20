#include <iostream>

using namespace std;

int* new1()
{
	int* p = new int(10);

	return p;
}

int* new2()
{
	int* arr = new int[10];	//开辟数组
	for (int i = 0; i < 10; i++)
		arr[i] = i;

	return arr;
}


void test1()
{
	int* p = new1();
	cout << *p << endl;
	delete p;

	//cout << *p << endl;

	int* arr = new2();
	for (int i = 0; i < 10; i++)
		cout << arr[i] << " ";

	cout << endl;

	delete[] arr;	//释放数组加[]。
}


int main()
{
	//test1();
	int a = 10;
	int& b = a;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	b = 10000;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	
	return 0;
}