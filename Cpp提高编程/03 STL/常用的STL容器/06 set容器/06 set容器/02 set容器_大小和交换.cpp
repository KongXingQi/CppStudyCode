//#include <iostream>
//#include <set>
//
//using namespace std;
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
//void test01()
//{
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(30);
//
//	printSet(s1);
//
//	if (s1.empty())
//	{
//		cout << "s1 Ϊ��!" << endl;
//	}
//	else
//	{
//		cout << "s1 ��Ϊ��! " << endl;
//		cout << "s1 ��СΪ: " << s1.size() << endl;
//	}
//
//	set<int> s2;
//	s2.insert(100);
//	s2.insert(400);
//	s2.insert(200);
//	s2.insert(300);
//	cout << "����ǰ: " << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "������: " << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//
//}
//
//int main()
//{
//
//	test01();
//	return 0;
//}