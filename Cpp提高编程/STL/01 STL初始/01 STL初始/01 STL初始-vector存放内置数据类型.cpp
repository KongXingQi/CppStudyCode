//#include <iostream>
//#include <vector>
//#include <algorithm>	//algorithm ��׼�㷨ͷ�ļ�
//
//using namespace std;
//
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//
//void test01()
//{
//	vector<int> v;
//
//	//��������
//	for (int i = 0; i < 5; i++)
//		v.push_back(i);
//
//	//ͨ�����������������е�����
//	vector<int>::iterator itBegin = v.begin();	//��ʼ��������ָ�������е�һ��Ԫ�ء�
//	vector<int>::iterator itEnd = v.end();		//������������ָ�����������һ��Ԫ�ص���һ��λ�á�
//
//	//��һ�ֱ�����ʽ
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//
//	//�ڶ���
//	for (auto i = v.begin(); i < v.end(); i++)
//		cout << *i << " ";
//
//	cout << endl;
//	//�����֣�����STL�б����㷨 for_each();
//	for_each(v.begin(), v.end(), myPrint);
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