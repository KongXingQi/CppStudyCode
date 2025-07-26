//#include <iostream>
//#include <list>
//
//using namespace std;
//
//void printList(const list<int>& l)
//{
//	for (auto it = l.begin(); it != l.end(); it++)
//		cout << *it << " ";
//
//	cout << endl;
//}
//
//
//void test01()
//{
//	list<int> l1;
//	for (int i = 0; i < 10; i++)
//		l1.push_back(i);
//
//	printList(l1);
//	if (l1.empty())
//	{
//		cout << "l1 为空 " << endl;
//	}
//	else
//	{
//		cout << "l1 不为空! " << endl;
//		cout << "l1 大小为: " << l1.size() << endl;
//	}
//
//	// resize
//	l1.resize(15);
//	printList(l1);
//
//
//	l1.resize(20, 66);
//	printList(l1);
//
//	l1.resize(5);
//	printList(l1);
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}