//#include <iostream>
//
//using namespace std;
//
//
//template<class T>
//class Base
//{
//public:
//
//	T m_A;
//};
//
////1. ������̳еĸ�����һ����ģ���ǣ�������������ʱ��Ҫָ����������T������
//class Son1 :public Base<int>
//{
//
//};
//
////2. ��������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��
//template<class T1, class T2>
//class Son2 :public Base<T2>
//{
//public:
//
//	T1 m_A;
//};
//
//void test01()
//{
//	Son1 s1;
//	Son2<int, char> s2;
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}