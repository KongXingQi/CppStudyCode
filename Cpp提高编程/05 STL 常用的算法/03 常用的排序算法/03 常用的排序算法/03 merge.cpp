//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2;
//	//有序序列
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i+1);
//	}
//
//	//必须有足够的空间
//	vector<int> v3;
//	v3.resize(v1.size() + v2.size());
//
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//
//	for (auto it = v3.begin(); it != v3.end(); it++)
//		cout << *it << " ";
//
//	cout << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}