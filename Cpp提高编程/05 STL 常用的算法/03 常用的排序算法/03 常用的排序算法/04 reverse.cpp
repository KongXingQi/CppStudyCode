#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	reverse(v1.begin(), v1.end());

	for (auto it = v1.begin(); it != v1.end(); it++)
		cout << *it << " ";

	cout << endl;

}

int main()
{
	test01();
	return 0;
}