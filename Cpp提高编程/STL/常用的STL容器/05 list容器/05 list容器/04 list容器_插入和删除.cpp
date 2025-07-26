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
//	//尾插
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	//头插
//	l1.push_front(100);
//	l1.push_front(200);
//	l1.push_front(300);
//
//	printList(l1);
//
//	//头尾删
//	l1.pop_back();
//	l1.pop_front();
//	printList(l1);
//
//	auto it = l1.begin();
//	l1.insert(l1.end(), 66);
//	l1.insert(it, 6, 66);
//	printList(l1);
//
//	//区间插入
//	list<int> l2;
//	for (int i = 0; i < 5; i++)
//		l2.push_back(521);
//	it = l1.begin();
//	it++;
//	l1.insert(it, l2.begin(), l2.end());
//	printList(l1);
//
//	//删除
//	it = l1.begin();
//	l1.erase(it);
//	printList(l1);
//
//
//	l1.remove(521);
//	printList(l1);
//
//	l1.clear();
//	printList(l1);
//
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}