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
//
//	//插入 四 种方式
//	m1.insert(pair<int, int>(1, 10));
//
//	m1.insert(make_pair(2, 20));
//
//	m1.insert(map<int, int>::value_type(3, 30));
//
//	m1[4] = 40;
//
//	cout << m1[5] << endl;	//出现m1[5]自动就在map中插入了key为5 value 为0的值。
//	printMap(m1);
//	
//	//删除
//	m1.erase(m1.begin());
//	printMap(m1);
//
//	m1.erase(5);	//按照key删除
//	printMap(m1);
//
//	//清空
//	//m1.erase(m1.begin(), m1.end());
//	m1.clear();
//	printMap(m1);
//}
//int main()
//{
//	test01();
//	return 0;
//}