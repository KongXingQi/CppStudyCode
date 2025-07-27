//#include <iostream>
//#include <map>
//
//using namespace std;
//
//void printMap(map<int, int> m)
//{
//	for (auto it = m.begin(); it != m.end(); it++)
//		cout << "key = " << it->first << " value = " << it->second << endl;
//
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(2, 20));
//
//	printMap(m);
//
//	map<int, int> m1(m);
//	printMap(m1);
//
//	map<int, int> m2;
//	m2 = m1;
//
//	printMap(m2);
//
//}
//int main()
//{
//	test01();
//	return 0;
//}