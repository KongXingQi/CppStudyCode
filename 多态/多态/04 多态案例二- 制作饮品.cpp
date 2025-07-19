//#include <iostream>
//
//using namespace std;
//
//
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//	
//	//冲泡
//	virtual void Brew() = 0;
//
//	//倒入杯中
//	virtual void PourInCup() = 0;
//
//	//加入辅料
//	virtual void PutSomething() = 0;
//
//
//	//制作饮品
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
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮入农夫山泉" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "泡入咖啡" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入咖啡杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//
////制作茶叶
//class Tea :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮入怡宝" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//
//	//倒入杯中
//	virtual void PourInCup()
//	{
//		cout << "倒入超级无敌巨大杯中" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加入超级无敌巨大枸杞" << endl;
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
//	//制作咖啡
//	doWork(new Coffee);
//
//	cout << "---------------------------" << endl;
//	//制作茶
//	doWork(new Tea);
//}
//
//
//int main()
//{
//	Test01();
//	return 0;
//}