//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//void printVector(vector<int>& v1)
//{
//	for (int i = 0; i < v1.size(); i++)
//		cout << v1[i] << " ";
//
//	cout << endl;
//}
//
//
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//	printVector(v1);
//
//	if (v1.empty())
//	{
//		cout << "v1 Ϊ��! " << endl;
//	}
//	else
//	{
//		cout << "v1 ��������: " << v1.capacity() << endl;
//		cout << "v1 �Ĵ�С��: " << v1.size() << endl;
//	}
//
//	v1.resize(15);	//Ĭ��������Ϊ0
//	printVector(v1);
//	v1.resize(20, 666);	//ָ��������Ϊ 666
//	printVector(v1);
//
//	v1.resize(5);
//	printVector(v1);
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