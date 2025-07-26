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
//
//	printSet(s1);
//
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	s1.erase(30);
//	printSet(s1);
//
//	//Çå¿Õ
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}