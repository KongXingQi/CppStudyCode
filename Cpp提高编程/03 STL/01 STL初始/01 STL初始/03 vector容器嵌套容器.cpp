#include <iostream>
#include <vector>

using namespace std;


void test01()
{
	vector<vector<int>> v;


	//����С����
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3);
		v4.push_back(i + 4);
	}

	//С�������������
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//ͨ�����������������ݱ���һ��
	for (auto i = v.begin(); i < v.end(); i++)
	{

		for (auto j = (*i).begin(); j < (*i).end(); j++)
			cout << *j << " ";

		cout << endl;

	}

}



int main()
{
	test01();
	return 0;
}