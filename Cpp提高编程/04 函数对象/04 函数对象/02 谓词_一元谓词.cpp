//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class CreateFive
//{
//public:
//	//- 返回bool类型的仿函数称为谓词
//	//-如果operatro()接受一个参数，那么称为一元谓词
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
//		cout << "没有找到！ " << endl;
//	}
//	else
//	{
//		cout << "找到了 " << *it << endl;
//	}
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}