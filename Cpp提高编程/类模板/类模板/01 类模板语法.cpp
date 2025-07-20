//#include <iostream>
//#include <string>
//
//using namespace std;
//
////类模板
//template<class NameType, class AgeType>	//可以写多个
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
//void test01()
//{
//	Person<string, int> p1("kxq", 18);
//	p1.showPerson();
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}