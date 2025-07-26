//#include <iostream>
//#include <set>
//
//using namespace std;
//
//
//void printSet(const set<int>& s1)
//{
//	for (auto it = s1.begin(); it != s1.end(); it++)
//		cout << *it << " ";
//
//	cout << endl;
//}
//
//
//
//void test01()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(20);
//	s1.insert(20);
//	s1.insert(20);
//	s1.insert(20);
//
//	auto pos = s1.find(20);
//
//	if (pos == s1.end())
//	{
//		cout << "没找到！" << endl;
//	}
//	else
//	{
//		cout << "找到了！" << endl;
//	}
//	
//	cout << s1.count(20)  << endl;
//}
//
//void test02()
//{
//	multiset<int> s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(20);
//	s1.insert(20);
//	s1.insert(20);
//	s1.insert(20);
//
//	cout << s1.count(20) << endl;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}