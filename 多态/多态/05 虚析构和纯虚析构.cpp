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
//		cout << "Aminal �Ĺ��캯������ " << endl;
//	}
//
//	//���麯��
//	virtual void sepak() = 0;
//
//	//����ָ����������ʱ�� ����������������������������������ж������ԣ�������ڴ�й¶
//	//���������Խ��������
//	/*virtual ~Animal()
//	{
//		cout << "Aminal �������������� " << endl;
//	}*/
//
//	//��������
//	virtual ~Animal() = 0;
//};
//
//
////�������� 
//Animal::~Animal()
//{
//	cout << "Aminal �Ĵ��������������� " << endl;
//}
//
//
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat �Ĺ��캯������ " << endl;
//
//		m_Name = new string(name);
//	}
//
//
//	void sepak()
//	{
//		cout << *m_Name << "Сè��˵��" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat �������������� " << endl;
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
//	//����ָ����������ʱ�� ����������������������������������ж������ԣ�������ڴ�й¶
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