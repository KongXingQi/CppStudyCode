#include <iostream>

using namespace std;


//����ͬ�����
//����cpu��
class Cpu
{
public:
	virtual void calculate() = 0;
};

//�����Կ���
class VideoCard
{
public:
	virtual void display() = 0;
};

//�����ڴ���
class Memory
{
public:
	virtual void storage() = 0;
};

//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------


//������
class Computer
{
public:
	Computer(Cpu* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//������
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

//����ĳ���
//Intel����
class IntelCpu:public Cpu
{
	virtual void calculate()
	{
		cout << "Intel��cpu��ʼ�����ˣ�" << endl;
	}
};

class IntelVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Intel���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class IntelMemory :public Memory
{
	virtual void storage()
	{
		cout << "Intel���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};


//Lenovo����
class LenovoCpu :public Cpu
{
	virtual void calculate()
	{
		cout << "Lenovo��cpu��ʼ�����ˣ�" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ��ʾ�ˣ�" << endl;
	}
};

class LenovolMemory :public Memory
{
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ�洢�ˣ�" << endl;
	}
};

//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------

void test01()
{
	//��һ̨�������
	Cpu* interCpu = new IntelCpu;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMemory = new IntelMemory;

	//������һ̨����
	cout << "��һ̨���Դ�����ɣ�" << endl;
	Computer* computer = new Computer(interCpu, intelCard, intelMemory);
	computer->work();
	delete computer;

	cout << "-------------------------------------" << endl;
	cout << "�ڶ�̨���Դ�����ɣ�" << endl;
	computer = new Computer(new LenovoCpu, new LenovoVideoCard, new LenovolMemory);
	computer->work();


	cout << "-------------------------------------" << endl;
	cout << "����̨���Դ�����ɣ�" << endl;
	computer = new Computer(new LenovoCpu, new IntelVideoCard, new LenovolMemory);
	computer->work();

}


int main()
{
	test01();
	return 0;
}