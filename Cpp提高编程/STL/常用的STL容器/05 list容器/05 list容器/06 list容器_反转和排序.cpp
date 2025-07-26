#include <iostream>
#include <list>
#include <algorithm>

using namespace std;


void printList(const list<int>& l)
{
	for (auto it = l.begin(); it != l.end(); it++)
		cout << *it << " ";

	cout << endl;
}

bool myCompare(int v1, int v2)
{
	//��һ���� ���� �ڶ��� 10 9 8 .�������� 
	return v1 > v2;	//����
}


void test01()
{
	list<int> l1;
	l1.push_back(50);
	l1.push_back(20);
	l1.push_back(40);
	l1.push_back(10);
	l1.push_back(30);

	cout << "��תǰ: " << endl;
	printList(l1);
	//��ת
	l1.reverse();
	cout << "��ת��: " << endl;
	printList(l1);


	//����
	//sort(l1.begin(), l1.end());	//��׼�㷨���е�sortֻ�ܶ�֧��������ʵ����ݽṹ�������򣬱���strig vector �ȵ�.
	cout << "����ǰ: " << endl;
	printList(l1);

	l1.sort();
	cout << "�����: " << endl;
	printList(l1);

	l1.sort(myCompare);	//����
	printList(l1);

}

int main()
{
	test01();
	return 0;
}