//#include <iostream>
//
//using namespace std;
//
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myInt);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//����ǰ��-- �ú������ز������������͵ģ� ��Ϊǰ��--��Ҫ�����䱾�壬�����Է��ظ���  --(--a)֧�����ֲ���
//	MyInteger& operator--()
//	{
//		m_Num--;
//		return *this;
//	}
//
//	//���غ���--	�ú������ز������������͵ģ� ��Ϊ����--��Ҫ�����丱���������Է��ر��� (a--)--��֧�����ֲ���
//	MyInteger operator--(int)//��Ҫռλ����
//	{
//		MyInteger t = *this;
//		m_Num--;
//		return t;
//	}
//
//private:
//	int m_Num;
//};
//
//
////����<<�����
//ostream& operator<<(ostream& cout, MyInteger myInt)
//{
//	cout << myInt.m_Num;
//	return cout;
//}
//
//
//void test01()
//{
//	MyInteger myInt;
//	cout << myInt << endl;
//	cout << --(--myInt) << endl;
//	cout << myInt << endl;
//
//}
//void test02()
//{
//	MyInteger myInt;
//	cout << myInt << endl;
//	cout << myInt-- << endl;
//	cout << myInt << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}