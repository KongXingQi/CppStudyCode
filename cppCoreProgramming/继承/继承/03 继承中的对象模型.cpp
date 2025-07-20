//#include <iostream>
//
//using namespace std;
//
//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son : public Base
//{
//public:
//	int m_D;
//};
//
//
//void test01()
//{
//	Son s1;
//	//16
//	//父类中所有非静态成员都会被子类继承下去。
//	//父类中私有成员属性 是被编译器给隐藏了，因此是访问不到的，但确实被继承下去了。
//	cout << "s1在内存的大小 " << sizeof(s1) << endl;
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}