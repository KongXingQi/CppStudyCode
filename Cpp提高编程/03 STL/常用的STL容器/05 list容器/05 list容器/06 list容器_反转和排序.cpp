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
	//第一个数 大于 第二数 10 9 8 .。。。。 
	return v1 > v2;	//降序
}


void test01()
{
	list<int> l1;
	l1.push_back(50);
	l1.push_back(20);
	l1.push_back(40);
	l1.push_back(10);
	l1.push_back(30);

	cout << "反转前: " << endl;
	printList(l1);
	//反转
	l1.reverse();
	cout << "反转后: " << endl;
	printList(l1);


	//排序
	//sort(l1.begin(), l1.end());	//标准算法库中的sort只能对支持随机访问的数据结构进行排序，比如strig vector 等等.
	cout << "排序前: " << endl;
	printList(l1);

	l1.sort();
	cout << "排序后: " << endl;
	printList(l1);

	l1.sort(myCompare);	//降序
	printList(l1);

}

int main()
{
	test01();
	return 0;
}