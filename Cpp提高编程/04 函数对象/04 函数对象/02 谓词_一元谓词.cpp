//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class CreateFive
//{
//public:
//	//- ����bool���͵ķº�����Ϊν��
//	//-���operatro()����һ����������ô��ΪһԪν��
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//
//};
//
//
//void test01()
//{
//	vector<int> v;
//	
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//
//	auto it = find_if(v.begin(), v.end(), CreateFive());
//	if (it == v.end())
//	{
//		cout << "û���ҵ��� " << endl;
//	}
//	else
//	{
//		cout << "�ҵ��� " << *it << endl;
//	}
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}