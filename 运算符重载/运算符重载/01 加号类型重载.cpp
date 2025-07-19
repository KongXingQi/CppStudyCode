//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//
//	//1. 成员函数重载加号
//	//Person operator+(Person& p)
//	//{
//	//	Person t;
//	//	t.m_A = this->m_A + p.m_A;
//	//	t.m_B = this->m_B + p.m_B;
//	//	
//	//	return t;
//	//}
//
//
//	int m_A;
//	int m_B;
//};
//
//// 2. 全局函数来重载加号运算符
//Person operator+(Person& p1, Person& p2)
//{
//	Person t;
//	t.m_A = p1.m_A + p2.m_A;
//	t.m_B = p1.m_B +p2.m_B;
//
//	return t;
//}
//
//Person operator+(Person& p, int x)
//{
//	Person t;
//	t.m_A = p.m_A + x;
//	t.m_B = p.m_B + x;
//
//	return t;
//}
//
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	//Person p3 = p1.operator+(p2);	//成员函数重载的的本质调用
//	//Person p3 = operator+(p1, p2);	//全局函数重载的的本质调用
//	Person p3 = p1 + p2;			//简化版本
//
//	cout << "p3.m_A = " << p3.m_A << endl;
//	cout << "p3.m_B = " << p3.m_B << endl;
//
//	//运算符重载 也可以发生函数重载
//	Person p4 = p1 + 100;
//	cout << "p4.m_A = " << p4.m_A << endl;
//	cout << "p4.m_B = " << p4.m_B << endl;
//
//
//}
//
//
//
//int main()
//{
//	test01();
//	return 0;
//}