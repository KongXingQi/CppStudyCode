#include "point.h"

//设置(x，y)坐标
void Point::setX(int x)
{
	m_X = x;
}
void Point::setY(int y)
{
	m_Y = y;
}

//获取xy坐标
int Point::getX()
{
	return m_X;
}

int Point::getY()
{
	return m_Y;
}
