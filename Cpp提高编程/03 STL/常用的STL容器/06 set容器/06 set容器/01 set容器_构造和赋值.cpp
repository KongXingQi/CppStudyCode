//#include <iostream>
//#include <set>
//
//using namespace std;
//
//
//
//void printSet(const set<int>& s)
//{
//	for (auto it = s.begin(); it != s.end(); it++)
//		cout << *it << " ";
//
//	cout << endl;
//}
//void printMultiset(const multiset<int>& s)
//{
//	for (auto it = s.begin(); it != s.end(); it++)
//		cout << *it << " ";
//
//	cout << endl;
//}
//
//void test01()
//{
//	set<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(60);
//	s1.insert(20);
//	s1.insert(20);
//	s1.insert(20);
//	s1.insert(20);
//	s1.insert(50);
//
//	//set�в�֧���ظ���Ԫ�أ�ֻ�ܲ���һ��
//	//�Զ�����
//	printSet(s1);
//
//	set<int> s2(s1);
//	printSet(s2);
//
//	set<int> s3;
//	s3 = s2;
//	printSet(s3);
//
//
//}
//void test02()
//{
//	multiset<int> s1;
//
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(60);
//	s1.insert(20);
//	s1.insert(20);
//	s1.insert(20);
//	s1.insert(20);
//	s1.insert(50);
//
//	//multiset��֧���ظ���Ԫ�أ�
//	//�Զ�����
//	printMultiset(s1);
//
//	multiset<int> s2(s1);
//	printMultiset(s2);
//
//	multiset<int> s3;
//	s3 = s2;
//	printMultiset(s3);
//
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}