#include <iostream>
#include <vector>

using namespace std;

void test01()
{
	vector<int> v(1000000);
	int cnt = 0;
	int* p = NULL;

	for (int i = 0; i < 100000; i++)
	{
		/*if (v.size() >= v.capacity())
			cnt++;
		*/
		v.push_back(i);
		//看看开辟了多少次，迁移了多少次
		if (p != &v[0])
		{
			p = &v[0];
			cnt++;
		}

	}


	cout << "cnt = " << cnt;
}


int main()
{
	test01();
	return 0;
}