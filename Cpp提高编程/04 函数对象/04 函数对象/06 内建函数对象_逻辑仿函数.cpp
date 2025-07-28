#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>


using namespace std;

//逻辑非 logical_not
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

	//利用逻辑非 将容器v搬运到v2中， 并执行取反操作
	vector<bool> v2;

	//必须提前开辟空间
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