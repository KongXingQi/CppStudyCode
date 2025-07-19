#include "point.h"
#include "circle.h"

using namespace std;

//点和圆的关系

//设计点类
//class Point
//{
//public:
//	//设置(x，y)坐标
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//
//	//获取xy坐标
//	int getX()
//	{
//		return m_X;
//	}
//
//	int getY()
//	{
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};

//设计圆类
//class Circle
//{
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//
//	//设置圆心
//	void setCenter(Point p)
//	{
//		m_Center = p;
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//	void isInCircleByClass(Point& p)
//	{
//		//计算两点之间的距离 平方
//		int dis = (m_Center.getX() - p.getX()) * (m_Center.getX() - p.getX()) +
//			(m_Center.getY() - p.getY()) * (m_Center.getY() - p.getY());
//		//计算半径的平方
//		int disR = m_R * m_R;
//
//		if (dis == disR)
//		{
//			cout << "点在圆上" << endl;
//		}
//		else if (dis > disR)
//		{
//			cout << "点在圆外" << endl;
//		}
//		else
//			cout << "点在圆内" << endl;
//
//	}
//
//
//private:
//	int m_R;	//半径
//	Point m_Center;	//圆心
//};

void isInCircle(Circle &c, Point &p)
{
	//计算两点之间的距离 平方
	int dis = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径的平方
	int disR = c.getR() * c.getR();

	if (dis == disR)
	{
		cout << "点在圆上" << endl;
	}
	else if (dis > disR)
	{
		cout << "点在圆外" << endl;
	}
	else
		cout << "点在圆内" << endl;

}


int main()
{
	//创建圆心
	Point center;
	center.setX(10);
	center.setY(0);
	//创建圆
	Circle c;
	c.setR(10);
	c.setCenter(center);
	//创建点
	Point p;
	p.setX(0);
	p.setY(2);

	//isInCircle(c, p);
	c.isInCircleByClass(p);

	return 0;
}