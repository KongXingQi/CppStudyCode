//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	string name;
//	int age;
//};
//
//
//template<typename T>
//bool myCompare(T a, T b)
//{
//	return a == b;
//}
//
//
//void test01()
//{
//	int a = 10, b = 20;
//	char c1 = 'a', c2 = 'a';
//
//	if (myCompare(a, b))
//		cout << "a = b" << endl;
//	else
//		cout << "a != b" << endl;
//
//	if (myCompare(c1, c2))
//		cout << "c1 = c2" << endl;
//	else
//		cout << "c1 != c2" << endl;
//
//}
//
//
//
//template<> bool myCompare(Person a, Person b)
//{
//	return a.name == b.name && a.age == b.age;
//}
//
//void test02()
//{
//	Person p1("kxq", 18);
//	Person p2("kxq", 21);
//
//
//	if (myCompare(p1, p2))
//		cout << "p1 = p2" << endl;
//	else
//		cout << "p1 != p2" << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}