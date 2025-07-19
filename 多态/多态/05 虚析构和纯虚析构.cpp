//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Aminal 的构造函数调用 " << endl;
//	}
//
//	//纯虚函数
//	virtual void sepak() = 0;
//
//	//父类指针在析构的时候 不会调用子类的析构函数，导致子类如果有堆区属性，会出现内存泄露
//	//虚析构可以解决此问题
//	/*virtual ~Animal()
//	{
//		cout << "Aminal 的析构函数调用 " << endl;
//	}*/
//
//	//纯虚析构
//	virtual ~Animal() = 0;
//};
//
//
////纯虚析构 
//Animal::~Animal()
//{
//	cout << "Aminal 的纯虚析构函数调用 " << endl;
//}
//
//
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat 的构造函数调用 " << endl;
//
//		m_Name = new string(name);
//	}
//
//
//	void sepak()
//	{
//		cout << *m_Name << "小猫在说话" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat 的析构函数调用 " << endl;
//			delete(m_Name);
//			m_Name = NULL;
//		}
//
//	}
//
//	string* m_Name;
//};
//
//
//void test01()
//{
//	Animal* a = new Cat("Tom");
//	a->sepak();
//
//	//父类指针在析构的时候 不会调用子类的析构函数，导致子类如果有堆区属性，会出现内存泄露
//	delete a;
//}
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}