//#include <iostream>
//
//using namespace std;
//
////��ͨд����
//class Calculator
//{
//public:
//	int getResult(string op)
//	{
//		if (op == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (op == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (op == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		//�������չ�¹��ܣ���Ҫ�޸�Դ��
//		//�����ǿ����� �峤 ����ԭ��
//		//����ԭ��: ����չ���п��ţ����޸ļ����йر�
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
//void test01()
//{
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 20;
//
//	cout << c.m_Num1 << " + " << c.m_Num2 << " =  " << c.getResult("+") << endl;
//	cout << c.m_Num1 << " - " << c.m_Num2 << " =  " << c.getResult("-") << endl;
//	cout << c.m_Num1 << " * " << c.m_Num2 << " =  " << c.getResult("*") << endl;
//
//
//}
//
////��̬д��
////�ô�
////1. ��֯�ṹ����
////2. �ɶ��Ը�
////3. ����ǰ�ںͺ��ڵ�ά���Ը�
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
////�ӷ���
//class AddCalculator:public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
////�˷���
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test02()
//{
//	//�����ָ���������   ָ��	 �������
//	AbstractCalculator* abs = new AddCalculator;
//	abs->m_Num1 = 10;
//	abs->m_Num2 = 20;
//	cout << abs->m_Num1 << " + " << abs->m_Num2 << " = " << abs->getResult() << endl;
//	delete abs;
//
//	abs = new SubCalculator;
//	abs->m_Num1 = 10;
//	abs->m_Num2 = 20;
//	cout << abs->m_Num1 << " - " << abs->m_Num2 << " = " << abs->getResult() << endl;
//	delete abs;
//
//
//	abs = new MulCalculator;
//	abs->m_Num1 = 10;
//	abs->m_Num2 = 20;
//	cout << abs->m_Num1 << " * " << abs->m_Num2 << " = " << abs->getResult() << endl;
//	delete abs;
//
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}