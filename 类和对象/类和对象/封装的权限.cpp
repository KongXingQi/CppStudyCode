//#include <iostream>
//
//using namespace std;
//
//
////访问权限
////三种
////公共权限 public		//成员 类内可以访问 类外可以访问
////保护权限 protected	//成员 类内可以访问 类外不可以访问
////私有权限 private		//成员 类内可以访问 类外不可以访问
//
//class Person
//{
////公共权限
//public:
//	string m_Name;	//姓名
////保护权限
//protected:
//	string m_Car;	//汽车
////私有权限
//private:
//	int m_Password;	//银行卡密码
//
//public:
//	void fun()
//	{
//
//		m_Name = "kxq";
//		m_Car = "宝马";
//		m_Password = 123;
//	}
//
//
//};
//
//
//
//int main()
//{
//	Person p1;
//	p1.fun();
//	//p1.m_Car = "自行车";//类外不可访问
//	//p1.m_Password = 32131
//	return 0;
//}