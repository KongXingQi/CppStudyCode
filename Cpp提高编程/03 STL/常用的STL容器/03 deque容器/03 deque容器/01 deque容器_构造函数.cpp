//#include <iostream>
//#include <deque>
//
//
//using namespace std;
//
//
//void printDeque(const deque<int> d)
//{
//	for (auto it = d.begin(); it != d.end(); it++)
//		cout << *it << " ";
//
//	cout << endl;
//}
//
//
//
//void test01()
//{
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//
//	printDeque(d1);
//
//	deque<int> d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int> d3(10, 66);
//	printDeque(d3);
//
//	deque<int> d4(d3);
//	printDeque(d4);
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}