//#include <iostream>
//
//using namespace std;
//
//
//template<class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "姓名: " << this->m_Name << " 年龄: " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//
////1. 类模板没有自动类型推导使用方式
//void test01()
//{
//	//这是错误的，编译器不能够自动推导。
//	//Person p1("xl", 18);
//
//	//只有这一种方式可以。
//	Person<string, int> p1("kxq", 18);
//	p1.showPerson();
//}
//
//
//
////2.类模板在模板参数列表中可以有默认参数
//void test02()
//{
//	Person<string> p2("dbq", 18);
//	p2.showPerson();
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}