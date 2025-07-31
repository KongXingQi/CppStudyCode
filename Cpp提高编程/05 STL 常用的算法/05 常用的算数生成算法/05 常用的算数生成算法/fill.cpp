#include <iostream>
#include <vector>
#include <numeric>


using namespace std;


void test01()
{
	vector<int> v;
	v.resize(10);

	//ºóÆÚÌî³ä
	fill(v.begin(), v.end(), 10);
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
}

int main()
{
	test01();
	return 0;
}