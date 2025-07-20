#include "point.h"
#include "circle.h"

using namespace std;

//���Բ�Ĺ�ϵ

//��Ƶ���
//class Point
//{
//public:
//	//����(x��y)����
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//
//	//��ȡxy����
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

//���Բ��
//class Circle
//{
//public:
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//
//	//����Բ��
//	void setCenter(Point p)
//	{
//		m_Center = p;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//
//	void isInCircleByClass(Point& p)
//	{
//		//��������֮��ľ��� ƽ��
//		int dis = (m_Center.getX() - p.getX()) * (m_Center.getX() - p.getX()) +
//			(m_Center.getY() - p.getY()) * (m_Center.getY() - p.getY());
//		//����뾶��ƽ��
//		int disR = m_R * m_R;
//
//		if (dis == disR)
//		{
//			cout << "����Բ��" << endl;
//		}
//		else if (dis > disR)
//		{
//			cout << "����Բ��" << endl;
//		}
//		else
//			cout << "����Բ��" << endl;
//
//	}
//
//
//private:
//	int m_R;	//�뾶
//	Point m_Center;	//Բ��
//};

void isInCircle(Circle &c, Point &p)
{
	//��������֮��ľ��� ƽ��
	int dis = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶��ƽ��
	int disR = c.getR() * c.getR();

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


int main()
{
	//����Բ��
	Point center;
	center.setX(10);
	center.setY(0);
	//����Բ
	Circle c;
	c.setR(10);
	c.setCenter(center);
	//������
	Point p;
	p.setX(0);
	p.setY(2);

	//isInCircle(c, p);
	c.isInCircleByClass(p);

	return 0;
}