//#include <iostream>
//#include <string>
//
//using namespace std;
//
////������Ԫ
//
////��������
//class Building
//{
//	friend class GoodGay;	//##########���������ѣ��� ������Ԫ
//public:
//	Building();	//���캯��
//
//
////��Ա����
//public:
//	string m_SittingRoom;
//
//private:
//	string m_BedRoom;
//};
//
//
////�û�����
//class GoodGay
//{
//
//public:
//	GoodGay();	//���캯��
//
//	void visit();	//�ιۺ�������Building�е�����(������˽��)
//
//
//
////��Ա����
//public:
//	Building* building;
//
//};
//
//
//
//// --------------------------------------------------------------------------------
////����ȥд��Ա����
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//
//}
//GoodGay::GoodGay()
//{
//	//����һ��������Ķ���
//	building = new Building;
//}
//
//
//void GoodGay:: visit()
//{
//	cout << "�û��ѵ������ڷ��� " << building->m_SittingRoom << endl;
//	cout << "�û��ѵ������ڷ��� " << building->m_BedRoom << endl;
//
//}
//// ---------------------------------------------------------------------------------
//
//
//void test01()
//{
//	GoodGay g;
//	g.visit();
//
//}
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}