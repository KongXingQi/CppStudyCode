#include <iostream>

using namespace std;


//抽象不同零件类
//抽象cpu类
class Cpu
{
public:
	virtual void calculate() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	virtual void display() = 0;
};

//抽象内存类
class Memory
{
public:
	virtual void storage() = 0;
};

//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------


//电脑类
class Computer
{
public:
	Computer(Cpu* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//工作。
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	virtual ~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	Cpu* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};

//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------

//具体的厂商
//Intel厂商
class IntelCpu:public Cpu
{
	virtual void calculate()
	{
		cout << "Intel的cpu开始计算了！" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Intel的显卡开始显示了！" << endl;
	}
};

class IntelMemory :public Memory
{
	virtual void storage()
	{
		cout << "Intel的内存条开始存储了！" << endl;
	}
};


//Lenovo厂商
class LenovoCpu :public Cpu
{
	virtual void calculate()
	{
		cout << "Lenovo的cpu开始计算了！" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了！" << endl;
	}
};

class LenovolMemory :public Memory
{
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了！" << endl;
	}
};

//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------

void test01()
{
	//第一台电脑零件
	Cpu* interCpu = new IntelCpu;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMemory = new IntelMemory;

	//创建第一台电脑
	cout << "第一台电脑创建完成：" << endl;
	Computer* computer = new Computer(interCpu, intelCard, intelMemory);
	computer->work();
	delete computer;

	cout << "-------------------------------------" << endl;
	cout << "第二台电脑创建完成：" << endl;
	computer = new Computer(new LenovoCpu, new LenovoVideoCard, new LenovolMemory);
	computer->work();


	cout << "-------------------------------------" << endl;
	cout << "第三台电脑创建完成：" << endl;
	computer = new Computer(new LenovoCpu, new IntelVideoCard, new LenovolMemory);
	computer->work();

}


int main()
{
	test01();
	return 0;
}