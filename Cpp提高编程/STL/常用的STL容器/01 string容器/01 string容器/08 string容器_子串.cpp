#include <iostream>
#include <string>

using namespace std;

void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);

	cout << "subStr =  " << subStr << endl;

}

//使用操作
void test02()
{
	string email = "xl@code.com";
	
	//从邮件的地址中获取用户的信息
	int pos = email.find('@');
	
	string userName = email.substr(0, pos);

	cout << "userName = " << userName << endl;
}

int main()
{
	//test01();
	test02();
	return 0;
}