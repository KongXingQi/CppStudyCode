#pragma once
#include <iostream>
using namespace std;

class Point
{
public:
	//����(x��y)����
	void setX(int x);
	void setY(int y);

	//��ȡxy����
	int getX();

	int getY();

private:
	int m_X;
	int m_Y;
};
