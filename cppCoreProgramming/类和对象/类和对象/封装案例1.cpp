//#include <iostream>
//
//using namespace std;
//
////�����������
////1.������������
////2.�������
////3.�����Ϊ��ȡ���������������
////4.�ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����
//
//class Cube
//{
//public:
//	//�ֱ������������ �����
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
//	//��������ı����
//	int calculateS()
//	{
//		return 2 * (m_L * m_W + m_L * m_G + m_W * m_G);
//	}
//
//	//������������
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
//	int m_L;	//��
//	int m_W;	//��
//	int m_G;	//��
//};
//
//
////�ж������������Ƿ����
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
//	cout << "c1������ı������: " << c1.calculateS() << endl;
//	cout << "c1������������: " << c1.calculateV() << endl;
//
//	if (isSame(c1, c2))
//		cout << "c1 �� c2 ���" << endl;
//	else
//		cout << "c1 �� c2  �����" << endl;
//
//	if (c2.isSameByClass(c3))
//		cout << "c1 �� c3 ���" << endl;
//	else
//		cout << "c1 �� c3 �����" << endl;
//
//	return 0;
//}