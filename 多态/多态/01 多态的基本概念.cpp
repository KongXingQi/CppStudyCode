//#include <iostream>
//
//using namespace std;
//
//
//class Animal
//{
//public:
//	//�麯�� 
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat:public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
//
//
//
//
////ִ��˵������
////���������˵�� ��ַ��� �ڱ���׶ξ�ȷ���˺����ĵ�ַ
////��Ҫ���è˵�� ��ô�����ĵ�ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а� ��ַ��󶨡� 
//
////��̬��̬��������
////1. �м̳й�ϵ
////2. ����Ҫ��д������麯��
//
////��̬��̬��ʹ��
////�����ָ��������� ָ���������
//
//
//void doSpeak(Animal &animal)	//�������ý����������
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