#include <iostream>

using namespace std;

//建筑物类
class Building;

//好基友类
class GoodGay
{
public:
	GoodGay();

	void visit();	//可以访问公共和私有
	void visit01();	//可以访问公共

public:
	Building* building;
};

//建筑物类
class Building
{
	friend void GoodGay::visit();	//成员函数作友元

public:
	Building();


public:
	string m_SittingRoom;	//客厅
private:
	string m_BedRoom;	//卧室
};

//------------------------------
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";

}
GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "好基友正在访问: " << building->m_SittingRoom << endl;
	cout << "好基友正在访问: " << building->m_BedRoom << endl;

}
void GoodGay::visit01()
{
	cout << "好基友正在访问: " << building->m_SittingRoom << endl;
	//cout << "好基友正在访问: " << building->m_BedRoom << endl;

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