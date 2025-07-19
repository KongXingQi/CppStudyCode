//#include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;
//	}
//
//	Person& PersonAddAge(const Person& p)
//	{
//		this->age += p.age;
//		return *this;		// 现在返回类型是Person& 就是返回的p2 本身 可以一直叠加的修改
//							// 如果返回类型是Person 就是一直返回p2' p2'' p2''' p2的复制版
//	}
//
//	//Person* PersonAddAge(const Person& p)
//	//{
//	//	this->age += p.age;
//	//	return this;
//	//}
//
//	int age;
//};
//
////1.解决名称冲突
//void test01()
//{
//	Person p1(10);
//
//	cout << "p1的年龄 " << p1.age << endl;
//
//}
//
////2. 返回对象本身用*this
//void test02()
//{
//	Person p1(10);
//	Person p2(10);
//
//	//链式编程
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	//p2.PersonAddAge(p1)->PersonAddAge(p1)->PersonAddAge(p1);
//
//	cout << "p2的年龄 " << p2.age << endl;
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