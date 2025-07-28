//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//void printVector(vector<int>& v)
//{
//
//	for (auto it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//
//	cout << endl;
//}
//
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//
//	printVector(v1);
//
//	//operator=
//	vector<int> v2;
//	v2 = v1;
//	printVector(v2);
//
//	//assign 区间赋值
//	vector<int> v3;
//	v3.assign(v2.begin(), v2.end());
//	printVector(v3);
//
//	//assign n个elem
//	vector<int> v4;
//	v4.assign(10, 6);
//	printVector(v4);
//
//
//}
//
//int main()
//{
//
//	test01();
//	return 0;
//}