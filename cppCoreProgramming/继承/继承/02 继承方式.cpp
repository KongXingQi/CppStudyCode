//#include <iostream>
//
//using namespace std;
//
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
////公共继承
//class Son1:public Base1
//{
//public:
//	void fun()
//	{
//		m_A = 100;		//还是公共
//		m_B = 100;		//还是保护
//		//m_C = 100;	//父类中的私有权限，无论如何继承 过来还是私有的
//	}
//};
//void test01()
//{
//
//	Son1 s1;
//	s1.m_A = 10;	//公共权限可以
//	//s1.m_B = 20;	//保护权限类外不可以访问
//}
////保护继承
//class Son2 : protected Base1
//{
//	void fun()
//	{
//		m_A = 10;	//保护权限类内可以访问
//		m_B = 10;	//保护权限类内可以访问
//		//m_C = 10;	//父类中的私有权限，无论如何继承 过来还是私有的
//	}
//};
//void test02()
//{
//	Son2 s2;
//	//s2.m_A = 100;	//保护权限类外不可以访问
//	//s2.m_B = 100;	//保护权限类外不可以访问
//}
//class Son3 : private Base1
//{
//	void fun()
//	{
//		m_A = 10;	//变为私有
//		m_B = 10;	//变为私有
//		//m_C = 10;
//	}
//};
//class GrandSon3 : public Son3
//{
//	void fun()
//	{
//		//m_A = 10;	//即使接下来用公共继承也无法访问，因为在Son3的类中已经变成私有了
//		//m_B = 10;	//即使接下来用公共继承也无法访问，因为在Son3的类中已经变成私有了
//		//m_C = 10;
//	}
//};
//void test03()
//{
//	Son3 s3;
//	//s3.m_A;	//无法访问
//	//s3.m_B; //无法访问
//}
//
//int main()
//{
//
//	return 0;
//}