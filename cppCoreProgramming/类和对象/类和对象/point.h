#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	//设置(x，y)坐标
	void setX(int x);
	void setY(int y);

	//获取xy坐标
	int getX();

	int getY();

private:
	int m_X;
	int m_Y;
};
