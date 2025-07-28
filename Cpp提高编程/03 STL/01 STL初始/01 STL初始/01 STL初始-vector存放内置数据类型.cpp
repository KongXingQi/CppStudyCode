//#include <iostream>
//#include <vector>
//#include <algorithm>	//algorithm 标准算法头文件
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
//	//插入数据
//	for (int i = 0; i < 5; i++)
//		v.push_back(i);
//
//	//通过迭代器访问容器中的数据
//	vector<int>::iterator itBegin = v.begin();	//起始迭代器，指向容器中第一个元素。
//	vector<int>::iterator itEnd = v.end();		//结束迭代器，指向容器中最后一个元素的下一个位置。
//
//	//第一种遍历方式
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//
//	//第二种
//	for (auto i = v.begin(); i < v.end(); i++)
//		cout << *i << " ";
//
//	cout << endl;
//	//第三种，利用STL中便利算法 for_each();
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