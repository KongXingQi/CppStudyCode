//#include <iostream>
//
//using namespace std;
//
//
//
//void myPrintf(int a, int b)
//{
//	cout << "��ͨ�����ĵ���!" << endl;
//}
//
//template<typename T>
//void myPrintf(T a, T b)
//{
//	cout << "����ģ��ĵ���!" << endl;
//}
//
//template<typename T>
//void myPrintf(T a, T b, T c)
//{
//	cout << "����ģ�����صĵ���!" << endl;
//}
//
//
////1.�����ͨ�����ͺ���ģ�嶼ʵ�֣����ȵ�����ͨ������
//void test01()
//{
//	int a = 0, b = 0;
//	myPrintf(a, b); 
//}
//
//
////2. ����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
////3. ����ģ��Ҳ���Է�������
//void test02()
//{
//	int a = 0, b = 0;
//	myPrintf<>(a, b);
//
//	myPrintf<>(a, b, 10);
//}
//
//
////4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
////��Ϊ���������ͨ��������Ҫ������ʽ����ת���ġ� 
//void test04()
//{
//	char c1 = 'a', c2 = 'b';
//
//	myPrintf(c1, c2);
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test04();
//	return 0;
//}