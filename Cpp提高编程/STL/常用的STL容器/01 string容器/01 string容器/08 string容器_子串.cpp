#include <iostream>
#include <string>

using namespace std;

void test01()
{
	string str = "abcdef";
	string subStr = str.substr(1, 3);

	cout << "subStr =  " << subStr << endl;

}

//ʹ�ò���
void test02()
{
	string email = "xl@code.com";
	
	//���ʼ��ĵ�ַ�л�ȡ�û�����Ϣ
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