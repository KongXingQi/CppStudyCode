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
//	for (int i = 0; i < 10; i++)
//		d1.push_back(i);
//
//	printDeque(d1);
//
//	if (d1.empty())
//	{
//		cout << "d1 为空 " << endl;
//	}
//	else
//	{
//		cout << "d1 不为空" << endl;
//		cout << "d1 的大小为 " << d1.size() << endl;
//	}
//
//	d1.resize(15);
//	printDeque(d1);
//
//
//
//	d1.resize(5);
//	printDeque(d1);
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}