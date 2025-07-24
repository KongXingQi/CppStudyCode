//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//
//void printVector(vector<int> v)
//{
//	for (int i = 0; i < v.size(); i++)
//		cout << v[i] << " ";
//
//	cout << endl;
//}
//
//
////1.基本使用
//void test01()
//{
//	vector<int> v1;
//	cout << "交换前: " << endl;
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//
//	printVector(v1);
//
//	vector<int> v2;
//	for (int i = 10; i > 0; i--)
//		v2.push_back(i);
//
//	printVector(v2);
//
//	cout << "交换后: " << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//
//
//
//} 
//
////2.实际用途
////巧用swap可以收缩内存空间
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++)
//		v.push_back(i);
//
//	cout << "v的容量是: " << v.capacity() << endl;
//	cout << "v的大小是: " << v.size() << endl;
//	cout << endl;
//
//
//	v.resize(3);
//	cout << "v的容量是: " << v.capacity() << endl;
//	cout << "v的大小是: " << v.size() << endl;
//	cout << endl;
//
//
//	vector<int>(v).swap(v);	//将匿名vector和v互换，然后系统自动释放匿名。
//	cout << "v的容量是: " << v.capacity() << endl;
//	cout << "v的大小是: " << v.size() << endl;
//	cout << endl;
//
//}
//
//int main()
//{
//
//	//test01();
//	test02();
//	return 0;
//}