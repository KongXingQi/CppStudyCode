//#include <iostream>
//#include <map>
//
//using namespace std;
//
//
//void test01()
//{
//	map<int, int> m1;
//	m1[1] = 10;
//	m1[2] = 20;
//	m1[3] = 30;
//	m1[4] = 40;
//	m1.insert(make_pair(3, 30));
//	m1.insert(make_pair(3, 30));
//	m1.insert(make_pair(3, 30));
//	m1.insert(make_pair(3, 30));
//
//	auto pos = m1.find(4);
//
//	if (pos != m1.end())
//	{
//		cout << "找到了！" << endl;
//		cout << "key = " << pos->first << " value = " << pos->second << endl;
//	}
//	else
//		cout << "没找到！" << endl;
//	
//	cout << m1.count(3) << endl;
//
//	multimap<int, int> m2;
//	m2.insert(make_pair(3, 30));
//	m2.insert(make_pair(3, 30));
//	m2.insert(make_pair(3, 30));
//	m2.insert(make_pair(3, 30));
//	m2.insert(make_pair(3, 30));
//
//
//	cout << m2.count(3) << endl;
//
//
//}
//int main()
//{
//	test01();
//	return 0;
//}