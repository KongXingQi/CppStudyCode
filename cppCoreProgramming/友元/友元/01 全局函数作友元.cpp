//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Building
//{
//	//goodFȫ�ֺ����� Building��ĺ����� ���Կ��Է���Building��˽�г�Ա
//	friend void goodF(Building& b);
//
//public:
//	Building()
//	{
//		m_SittingRoom = "����";
//		m_BedRoom = "����";
//	}
//public:
//	string m_SittingRoom;	//����
//
//private:
//	string m_BedRoom;	//����
//};
//
////ȫ�ֺ���
//void goodF(Building &b)
//{
//	cout << "���������ڷ��� " << b.m_SittingRoom << endl;
//	cout << "���������ڷ��� " << b.m_BedRoom << endl;
//
//}
//
//
//void test01()
//{
//	Building b;
//	goodF(b);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}