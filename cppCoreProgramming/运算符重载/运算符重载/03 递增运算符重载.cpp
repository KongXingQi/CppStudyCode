//#include <iostream>
//
//using namespace std;
//
//class MyInteger
//{
//	friend ostream& operator<< (ostream& cout, MyInteger myInt);
//public:
//	MyInteger()
//	{
//		m_num = 0;
//	}
//
//	//����ǰ��++ ����������Ϊ��һֱ��һ�����ݽ��е�������
//	//�ú������ز������������͵ģ� ��Ϊǰ��++��Ҫ�����䱾�壬�����Է��ظ���  ++(++a)֧�����ֲ���
//	MyInteger& operator++()
//	{
//		m_num++;
//
//		return *this;
//	}
//
//	//���غ���++
//	//�ú������ز������������͵ģ� ��Ϊ����--��Ҫ�����丱���������Է��ر��� (a++)++��֧�����ֲ���
//	MyInteger operator++(int)	//int ����ռλ���� ������������ǰ�úͺ��õ���
//	{
//		MyInteger t = *this;
//		m_num++;
//		return t;
//	}
//
//private:
//	int m_num;
//};
//
//
////���� << �����
//ostream& operator<< (ostream& cout, MyInteger myInt)
//{
//	cout << myInt.m_num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myInt;
//
//	cout << myInt << endl;
//	cout << ++(++myInt) << endl;
//	cout << myInt << endl;
//
//
//}
//
//void test02()
//{
//	MyInteger myInt;
//	cout << myInt << endl;		//0
//	cout << myInt++ << endl;	// 0
//	cout << myInt << endl;	//1
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
