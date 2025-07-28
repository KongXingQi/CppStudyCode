//#include <iostream>
//#include <deque>
//
//using namespace std;
//
//
//void printDeque(const deque<int>& d)
//{
//	for (auto it = d.begin(); it != d.end(); it++)
//		cout << *it << " ";
//
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int> d1;
//	//尾插
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//
//	printDeque(d1);
//
//	//头插
//	for (int i = 0; i < 10; i++)
//		d1.push_front(i);
//
//	printDeque(d1);
//
//	//尾删
//	d1.pop_back();
//	d1.pop_back();
//	d1.pop_back();
//	printDeque(d1);
//
//
//	//头删
//	d1.pop_front();
//	d1.pop_front();
//	d1.pop_front();
//	printDeque(d1);
//
//
//}
//
//void test02()
//{
//	deque<int> d1;
//	d1.push_back(1);
//	d1.push_back(2);
//	d1.push_back(3);
//	printDeque(d1);
//
//
//	d1.insert(d1.begin(), 10);
//	d1.insert(d1.begin(), 20);
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2, 100);
//	printDeque(d1);
//
//	// 按照区间进行插入。
//	deque<int> d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//}
//
//void test03()
//{
//	deque<int> d1;
//	d1.push_back(1);
//	d1.push_back(2);
//	d1.push_back(3);
//	d1.push_back(4);
//
//	printDeque(d1);
//	auto it = d1.begin();
//	it++;
//
//	d1.erase(it);
//	printDeque(d1);
//
//
//	//按照区间删除
//	//d1.erase(d1.begin(), d1.end());
//	d1.clear();
//	printDeque(d1);
//
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}