#include <iostream>

using namespace std;


//动物类
class Animal 
{
public:

	int m_Age;
};

//利用虚继承来解决菱形继承的问题 virtual
//在继承之前加上关键字 virtual 变成虚继承
// Animal类 称为虚基类
//羊类
class Sheep :virtual public Animal {};

//驼类
class Tuo : virtual public Animal {};

//羊驼类
class SheepTuo :public Sheep, public Tuo {};



void test01()
{
	SheepTuo st;

	//年龄这份数据 只有一份即可，菱形继承导致数据有两份，资源浪费。 
	//虚继承后两者相当于一份数据
	
	st.Sheep::m_Age = 18;


	st.Tuo::m_Age = 28;
	//将18修改成了28
	//虚继承其实是产生了一个虚基类指针，这个指针指向虚基类表，这个表中纪录了一个偏移量，
	//指向相同的一个数据m_Age; 所以说父类变成虚基类后，共享一个内存，上面 的操作变成了 修改操作。
	


	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;

}


int main()
{
	test01();
	return 0;
}