#include <iostream>
#include <map>

using namespace std;


class MyCompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};


void test01()
{
	map<int, int, MyCompare> m1;

	m1.insert(make_pair(1, 10));
	m1.insert(make_pair(3, 30));
	m1.insert(make_pair(2, 20));
	m1.insert(make_pair(5, 50));
	m1.insert(make_pair(4, 40));

	for (auto it = m1.begin(); it != m1.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}


}

int main()
{

	test01();
	return 0;
}