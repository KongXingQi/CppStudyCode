//#include <iostream>
//
//using namespace std;
//
//
//class Person
//{
//public:
//
//	void fun1()
//	{
//		cout << "fun1 ��������" << endl;
//	}
//
//	void fun2()
//	{
//		if (this == NULL)
//			return;
//
//		// �����ڵ��õ�ʱ��Ĭ��ǰ����һ��this����this->mAge
//		// ���Ե�����p1ΪNULLʱ�� this Ҳ��NULL ������в����ͻᱨ��
//		cout << "fun2 �������� ����:" << m_Age << endl; 
//	}
//
//
//
//	int m_Age;
//};
//
//
//void test01()
//{
//	Person* p1 = NULL;
//	p1->fun1();
//	p1->fun2();
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}