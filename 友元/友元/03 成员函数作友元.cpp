#include <iostream>

using namespace std;

//��������
class Building;

//�û�����
class GoodGay
{
public:
	GoodGay();

	void visit();	//���Է��ʹ�����˽��
	void visit01();	//���Է��ʹ���

public:
	Building* building;
};

//��������
class Building
{
	friend void GoodGay::visit();	//��Ա��������Ԫ

public:
	Building();


public:
	string m_SittingRoom;	//����
private:
	string m_BedRoom;	//����
};

//------------------------------
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";

}
GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "�û������ڷ���: " << building->m_SittingRoom << endl;
	cout << "�û������ڷ���: " << building->m_BedRoom << endl;

}
void GoodGay::visit01()
{
	cout << "�û������ڷ���: " << building->m_SittingRoom << endl;
	//cout << "�û������ڷ���: " << building->m_BedRoom << endl;

}
//------------------------------


void test01()
{
	GoodGay g;
	g.visit();
	g.visit01();
}


int main()
{
	test01();
	return 0;
}