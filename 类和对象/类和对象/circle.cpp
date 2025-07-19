#include "circle.h"

//设置半径
void Circle::setR(int r)
{
	m_R = r;
}
//获取半径
int Circle::getR()
{
	return m_R;
}

//设置圆心
void Circle::setCenter(Point p)
{
	m_Center = p;
}
//获取圆心
Point Circle::getCenter()
{
	return m_Center;
}

void Circle::isInCircleByClass(Point& p)
{
	//计算两点之间的距离 平方
	int dis = (m_Center.getX() - p.getX()) * (m_Center.getX() - p.getX()) +
		(m_Center.getY() - p.getY()) * (m_Center.getY() - p.getY());
	//计算半径的平方
	int disR = m_R * m_R;

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