//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Building
//{
//	//goodF全局函数是 Building类的好朋友 所以可以访问Building的私有成员
//	friend void goodF(Building& b);
//
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//public:
//	string m_SittingRoom;	//客厅
//
//private:
//	string m_BedRoom;	//卧室
//};
//
////全局函数
//void goodF(Building &b)
//{
//	cout << "好朋友正在访问 " << b.m_SittingRoom << endl;
//	cout << "好朋友正在访问 " << b.m_BedRoom << endl;
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