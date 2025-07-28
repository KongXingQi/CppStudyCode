#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>


using namespace std;

//�߼��� logical_not
void test01()
{
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " ";

	cout << endl;;

	//�����߼��� ������v���˵�v2�У� ��ִ��ȡ������
	vector<bool> v2;

	//������ǰ���ٿռ�
	v2.resize(v.size());

	transform(v.begin(), v.end(),v2.begin(), logical_not<bool>());

	for (auto it = v2.begin(); it != v2.end(); it++)
		cout << *it << " ";
	
}


int main()
{
	test01();
	return 0;
}