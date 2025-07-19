//#include <iostream>
//
//using namespace std;
//
////普通写法：
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
//		//如果想拓展新功能，需要修改源码
//		//在真是开发中 体长 开闭原则
//		//开闭原则: 对扩展进行开放，对修改及进行关闭
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
////多态写法
////好处
////1. 组织结构清晰
////2. 可读性高
////3. 对于前期和后期的维护性高
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
////加法类
//class AddCalculator:public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////减法类
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
////乘法类
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
//	//父类的指针或者引用   指向	 子类对象
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