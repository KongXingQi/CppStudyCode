//#include <iostream>
//#include <functional>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class MyCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//
////大于 greater
//void test01()
//{
//	vector<int> v;
//
//	v.push_back(10);
//	v.push_back(50);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(20);
//
//
//	for (auto it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//
//	cout << endl;
//
//	//相同
//	//sort(v.begin(), v.end(), MyCompare());
//	sort(v.begin(), v.end(), greater<int>());
//
//	for (auto it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}