//#include <iostream>
//#include <string>
//
//using namespace std;
//
////类作友元
//
////建筑物类
//class Building
//{
//	friend class GoodGay;	//##########类作好朋友！！ 类作友元
//public:
//	Building();	//构造函数
//
//
////成员变量
//public:
//	string m_SittingRoom;
//
//private:
//	string m_BedRoom;
//};
//
//
////好基友类
//class GoodGay
//{
//
//public:
//	GoodGay();	//构造函数
//
//	void visit();	//参观函数访问Building中的属性(公共和私用)
//
//
//
////成员变量
//public:
//	Building* building;
//
//};
//
//
//
//// --------------------------------------------------------------------------------
////类外去写成员函数
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//
//}
//GoodGay::GoodGay()
//{
//	//创建一个建筑物的对象
//	building = new Building;
//}
//
//
//void GoodGay:: visit()
//{
//	cout << "好基友的类正在访问 " << building->m_SittingRoom << endl;
//	cout << "好基友的类正在访问 " << building->m_BedRoom << endl;
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