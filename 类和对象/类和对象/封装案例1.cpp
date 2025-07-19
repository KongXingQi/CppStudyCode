//#include <iostream>
//
//using namespace std;
//
////立方体类设计
////1.创建立方体类
////2.设计属性
////3.设计行为获取立方体的面积和体积
////4.分别利用全局函数和成员函数 判断两个立方体是否相等
//
//class Cube
//{
//public:
//	//分别设置立方体的 长宽高
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	int getL()
//	{
//		return m_L;
//	}
//
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	int getW()
//	{
//		return m_W;
//	}
//
//	void setG(int g)
//	{
//		m_G = g;
//	}
//	int getG()
//	{
//		return m_G;
//	}
//
//	//求立方体的表面积
//	int calculateS()
//	{
//		return 2 * (m_L * m_W + m_L * m_G + m_W * m_G);
//	}
//
//	//求立方体的体积
//	int calculateV()
//	{
//		return m_L * m_W * m_G;
//	}
//
//	bool isSameByClass(Cube c)
//	{
//		return m_L == c.getL() && m_W == c.getW() && m_G == c.getG();
//	}
//
//
//
//private:
//	int m_L;	//长
//	int m_W;	//宽
//	int m_G;	//高
//};
//
//
////判断两个立方体是否相等
//bool isSame(Cube &c1, Cube &c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getG() == c2.getG())
//		return true;
//
//	return false;
//}
//
//
//int main()
//{
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setG(10);
//
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setG(10);
//
//	Cube c3;
//	c3.setL(20);
//	c3.setW(10);
//	c3.setG(10);
//
//	//2 * (100 + 100 + 100) = 600
//	//10 * 10 * 10 = 1000
//	cout << "c1立方体的表面积是: " << c1.calculateS() << endl;
//	cout << "c1立方体的体积是: " << c1.calculateV() << endl;
//
//	if (isSame(c1, c2))
//		cout << "c1 和 c2 相等" << endl;
//	else
//		cout << "c1 和 c2  不相等" << endl;
//
//	if (c2.isSameByClass(c3))
//		cout << "c1 和 c3 相等" << endl;
//	else
//		cout << "c1 和 c3 不相等" << endl;
//
//	return 0;
//}