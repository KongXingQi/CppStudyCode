#include "circle.h"

//���ð뾶
void Circle::setR(int r)
{
	m_R = r;
}
//��ȡ�뾶
int Circle::getR()
{
	return m_R;
}

//����Բ��
void Circle::setCenter(Point p)
{
	m_Center = p;
}
//��ȡԲ��
Point Circle::getCenter()
{
	return m_Center;
}

void Circle::isInCircleByClass(Point& p)
{
	//��������֮��ľ��� ƽ��
	int dis = (m_Center.getX() - p.getX()) * (m_Center.getX() - p.getX()) +
		(m_Center.getY() - p.getY()) * (m_Center.getY() - p.getY());
	//����뾶��ƽ��
	int disR = m_R * m_R;

	if (dis == disR)
	{
		cout << "����Բ��" << endl;
	}
	else if (dis > disR)
	{
		cout << "����Բ��" << endl;
	}
	else
		cout << "����Բ��" << endl;

}