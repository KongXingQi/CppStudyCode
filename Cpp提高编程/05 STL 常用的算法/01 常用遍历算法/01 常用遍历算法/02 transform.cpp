#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


class TransForm
{
public:
	int operator()(int val)
	{
		//支持操作
		return val%2;
	}
	
};

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};


void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(i);

	vector<int> v2;
	//提前开辟空间
	v2.resize(v1.size());

	transform(v1.begin(), v1.end(), v2.begin(), TransForm());
	for_each(v2.begin(), v2.end(), MyPrint());

}

int main()
{
	test01();
	return 0;
}