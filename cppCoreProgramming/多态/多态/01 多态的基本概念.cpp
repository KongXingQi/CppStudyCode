//#include <iostream>
//
//using namespace std;
//
//
//class Animal
//{
//public:
//	//虚函数 
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat:public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小猫在说话" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "小狗在说话" << endl;
//	}
//};
//
//
//
//
////执行说话函数
////输出动物在说话 地址早绑定 在编译阶段就确定了函数的地址
////想要输出猫说话 那么函数的地址就不能提前绑定，需要在运行阶段进行绑定 地址晚绑定。 
//
////动态多态满足条件
////1. 有继承关系
////2. 子类要重写父类的虚函数
//
////动态多态的使用
////父类的指针或者引用 指向子类对象
//
//
//void doSpeak(Animal &animal)	//父类引用接受子类对象
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//
//
//
//int main()
//{
//	test01();
//	return 0;
//}