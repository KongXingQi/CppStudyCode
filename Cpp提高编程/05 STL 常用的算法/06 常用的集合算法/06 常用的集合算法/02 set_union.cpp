//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//
//using namespace std;
//
//
//void test01()
//{
//	vector<int> v1, v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//		v2.push_back(i + 5); // 5~14
//	}
//
//	vector<int> v3;
//	//����������������������Ԫ��ȫ����һ������Ҫȫ���ϲ���
//	v3.resize(v1.size() + v2.size());
//	auto itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
//
//	for (auto it = v3.begin(); it != itEnd; it++)
//		cout << *it << " ";
//	cout << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}