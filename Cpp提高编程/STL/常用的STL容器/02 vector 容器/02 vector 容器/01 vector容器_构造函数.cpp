//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//void myPrint(vector<int> v)
//{
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//
//	cout << endl;
//}
//
//
//void test01()
//{
//	//Ĭ�Ϲ��캯��
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//
//	myPrint(v1);
//
//	//���乹��
//	vector<int> v2(v1.begin(), v1.end());
//	myPrint(v1);
//
//
//	//n��elem
//	vector<int> v3(10, 6);
//	myPrint(v3);
//
//
//	//��������
//	vector<int> v4(v3);
//	myPrint(v4);
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}