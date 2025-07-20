#include <iostream>
#include <fstream>
using namespace std;


class Person
{
public:

	char m_Name[64];
	int m_Age;
};

void test01()
{
	//1. 包含头文件
	
	//2. 创建流
	ifstream ifs;
	//3. 打开文件
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "打开文件失败! " << endl;
		return;
	}

	//4. 读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));


	cout << p.m_Name << " " << p.m_Age << endl;

	//5. 关闭文件
	ifs.close();
}


int main()
{

	test01();
	return 0;
}