//#include <iostream>
//#include <map>
//
//using namespace std;
//
//void printMap(map<int, int>& m)
//{
//	for (auto it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key = " << it->first << " value = " << it->second << endl;
//	}
//
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int> m1;
//	m1.insert(pair<int, int>(1, 10));
//	m1.insert(pair<int, int>(2, 20));
//	m1.insert(pair<int, int>(3, 30));
//	m1.insert(pair<int, int>(4, 40));
//
//	if (m1.empty())
//	{
//		cout << "m1 Ϊ�գ�" << endl;
//	}
//	else
//	{
//		cout << "m1 ��Ϊ��! " << endl;
//		cout << "m1 �Ĵ�СΪ: " << m1.size() << endl;
//	}
//
//
//	map<int, int> m2;
//	m2.insert(pair<int, int>(10, 100));
//	m2.insert(pair<int, int>(20, 200));
//	m2.insert(pair<int, int>(30, 300));
//	m2.insert(pair<int, int>(40, 400));
//
//	cout << "����ǰ: " << endl;
//	printMap(m1);
//	printMap(m2);
//
//	
//	cout << "������: " << endl;
//	m1.swap(m2);
//	printMap(m1);
//	printMap(m2);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}