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
//	//���� �� �ַ�ʽ
//	m1.insert(pair<int, int>(1, 10));
//
//	m1.insert(make_pair(2, 20));
//
//	m1.insert(map<int, int>::value_type(3, 30));
//
//	m1[4] = 40;
//
//	cout << m1[5] << endl;	//����m1[5]�Զ�����map�в�����keyΪ5 value Ϊ0��ֵ��
//	printMap(m1);
//	
//	//ɾ��
//	m1.erase(m1.begin());
//	printMap(m1);
//
//	m1.erase(5);	//����keyɾ��
//	printMap(m1);
//
//	//���
//	//m1.erase(m1.begin(), m1.end());
//	m1.clear();
//	printMap(m1);
//}
//int main()
//{
//	test01();
//	return 0;
//}