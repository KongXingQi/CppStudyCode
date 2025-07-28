//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//
////bool Compare(int v1, int v2)
////{
////	return v1 > v2;
////}
//
//// - 返回bool类型的仿函数称为谓词
//// - 如果operator()接受两个参数，那么称为二元谓词
//class ClassCompare
//{
//public:
//	bool operator()(int v1, int v2)
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(30);
//	v.push_back(20);
//
//	sort(v.begin(), v.end());
//
//	for (auto it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//
//	
//	//sort(v.begin(), v.end(), Compare);
//
//	sort(v.begin(), v.end(), ClassCompare());
//	for (auto it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}