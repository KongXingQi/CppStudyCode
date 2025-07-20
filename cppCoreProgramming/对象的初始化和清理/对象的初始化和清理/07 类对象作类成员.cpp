//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Phone
//{
//public:
//	Phone(string name)
//	{
//		m_Pname = name;
//		cout << "Phone 的构造函数调用" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone 的析构函数调用" << endl;
//	}
//
//	string m_Pname;
//};
//
//class Person
//{
//public:
//	Person(string name, string pName) : m_Name(name), m_Phone(pName)
//	{
//		cout << "Person 的构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person 的析构函数调用" << endl;
//
//	}
//
//	string m_Name;
//	Phone m_Phone;
//};
//
//
////当其他类作为本类成员时,构造时先构造其他类对象，再构造自身。
////						 析构时先析构自身，再析构其他类
//void test01()
//{
//	Person p("笑脸", "荣耀之魄");
//
//	cout << p.m_Name << " " << p.m_Phone.m_Pname << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}