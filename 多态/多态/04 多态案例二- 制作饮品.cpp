//#include <iostream>
//
//using namespace std;
//
//
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//	
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void PourInCup() = 0;
//
//	//���븨��
//	virtual void PutSomething() = 0;
//
//
//	//������Ʒ
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//
//};
//
//class Coffee :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "����ũ��ɽȪ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���뿧��" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뿧�ȱ���" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
////������Ҷ
//class Tea :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��������" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���볬���޵о޴���" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "���볬���޵о޴����" << endl;
//	}
//};
//
//void doWork(AbstractDrinking* abs)
//{
//	abs->makeDrink();
//	delete abs;
//}
//
//
//void Test01()
//{
//	//��������
//	doWork(new Coffee);
//
//	cout << "---------------------------" << endl;
//	//������
//	doWork(new Tea);
//}
//
//
//int main()
//{
//	Test01();
//	return 0;
//}