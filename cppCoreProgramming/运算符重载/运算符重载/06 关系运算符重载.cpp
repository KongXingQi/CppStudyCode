//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == "kxq" && p.m_Name == "fjy" || this->m_Name == "fjy" && p.m_Name == "kxq")
//			cout << "嘿嘿嘿" << endl;
//
//
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//			return true;
//		else
//			return false;
//	}
//
//	bool operator!=(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//			return false;
//		else
//			return true;
//	}
//
//
//	string m_Name;
//	int m_Age;
//};
//
//
//void test01()
//{
//	Person p1("kxq", 21);
//	Person p2("fjy", 21);
//
//	if (p1 == p2)
//		cout << "p1 和 p2 是相等的！" << endl;
//	else
//		cout << "p1 和 p2 是不相等的！" << endl;
//
//	/*if(p1 != p2)
//		cout << "p1 和 p2 是不相等的！" << endl;
//	else
//		cout << "p1 和 p2 是相等的！" << endl;*/
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}