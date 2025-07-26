//#include <iostream>
//#include <list>
//
//using namespace std;
//
//
//void printList(const list<int>& l)
//{
//	for (auto it = l.begin(); it != l.end(); it++)
//		cout << *it << " ";
//
//	cout << endl;
//}
//
////赋值
//void test01()
//{
//	list<int> l1;
//	
//	for (int i = 0; i < 10; i++)
//		l1.push_back(i);
//
//
//	printList(l1);
//
//	list<int> l2;
//	l2 = l1;
//	printList(l2);
//
//	list <int> l3;
//	l3.assign(l2.begin(), l2.end());
//	printList(l3);
//
//	list<int> l4;
//	l4.assign(10, 6);
//	printList(l4);
//
//}
//
//void test02()
//{
//	list<int> l1;
//	for (int i = 0; i < 10; i++)
//		l1.push_back(i);
//
//	list<int> l2;
//	l2.assign(10, 6);
//	cout << "交换前: " << endl;
//	printList(l1);
//	printList(l2);
//
//	swap(l1, l2);
//	cout << "交换后: " << endl;
//	printList(l1);
//	printList(l2);
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}