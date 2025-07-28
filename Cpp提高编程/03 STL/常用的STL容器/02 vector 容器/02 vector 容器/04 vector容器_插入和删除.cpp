//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//void printVector(vector<int>& v)
//{
//
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//
//	cout << endl;
//}
//
//
//void test01()
//{
//	vector<int> v1;
//
//	for (int i = 1; i <= 10; i++)
//		v1.push_back(i);
//
//	printVector(v1);
//
//	for (int i = 0; i < 5; i++)
//		v1.pop_back();
//	
//	printVector(v1);
//
//
//	v1.insert(v1.begin(), 10);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 3, 100);
//	printVector(v1);
//
//	v1.erase(v1.begin());
//	printVector(v1);
//
//
//	v1.erase(v1.begin(), v1.begin() + 3);
//	printVector(v1);
//
//	v1.clear();
//	printVector(v1);
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}