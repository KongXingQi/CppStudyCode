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
////1.����ʹ��
//void test01()
//{
//	vector<int> v1;
//	cout << "����ǰ: " << endl;
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
//	cout << "������: " << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//
//
//
//} 
//
////2.ʵ����;
////����swap���������ڴ�ռ�
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++)
//		v.push_back(i);
//
//	cout << "v��������: " << v.capacity() << endl;
//	cout << "v�Ĵ�С��: " << v.size() << endl;
//	cout << endl;
//
//
//	v.resize(3);
//	cout << "v��������: " << v.capacity() << endl;
//	cout << "v�Ĵ�С��: " << v.size() << endl;
//	cout << endl;
//
//
//	vector<int>(v).swap(v);	//������vector��v������Ȼ��ϵͳ�Զ��ͷ�������
//	cout << "v��������: " << v.capacity() << endl;
//	cout << "v�Ĵ�С��: " << v.size() << endl;
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