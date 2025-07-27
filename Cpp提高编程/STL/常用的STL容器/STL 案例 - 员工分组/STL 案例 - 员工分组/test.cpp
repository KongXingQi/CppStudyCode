#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

#define W_NUM 10	//��������

#define CEHUA 0		//�߻�
#define MEISHU 1	//����
#define YANFA	2	//�з�


class Worker
{
public:
	Worker(string name, int s)
	{
		this->m_Name = name;
		this->m_Salary = s;
	}

	string m_Name;	
	int m_Salary;	//����
}; 

//1. ����Ա��
void createWorker(vector<Worker>& v)
{
	//W_NUM���ַ�
	string nameSeed = "ABCDEFGHIJ";


	for (int i = 0; i < W_NUM; i++)
	{
		string name = "Ա��";
		name += nameSeed[i];

		int salary = rand() % 10001 + 10000;

		Worker w(name, salary);

		v.push_back(w);
 	}


}


//2. ���÷���
void setGroup(vector<Worker>& vWorker, multimap<int, Worker>& mWorker)
{
	for (int i = 0; i < vWorker.size(); i++)
	{
		int depID = rand() % 3; // 0 1 2  -----> �߻����������з�
		//ÿ�������������id�� ���뵽map��ȥ��
		mWorker.insert(make_pair(depID, vWorker[i]));
	}
}

//3. �Է���ķ�ʽ��ʾ
void showWorkByGroup(multimap<int, Worker>& mWorker)
{
	cout << "�߻�����: " << endl;
	auto it = mWorker.find(CEHUA);
	int cnt = (int)mWorker.count(CEHUA);
	int index = 0;
	for (; it != mWorker.end() && index < cnt; it++, index++)
		cout << "����: " << it->second.m_Name << " ����: " << it->second.m_Salary << endl;

	cout << "--------------------------------------" << endl;
	cout << "��������: " << endl;
	it = mWorker.find(MEISHU);
	cnt = (int)mWorker.count(MEISHU);
	index = 0;
	for (; it != mWorker.end() && index < cnt; it++, index++)
		cout << "����: " << it->second.m_Name << " ����: " << it->second.m_Salary << endl;


	cout << "--------------------------------------" << endl;
	cout << "�з�����: " << endl;
	it = mWorker.find(YANFA);
	cnt = (int)mWorker.count(YANFA);
	index = 0;
	for (; it != mWorker.end() && index < cnt; it++, index++)
		cout << "����: " << it->second.m_Name << " ����: " << it->second.m_Salary << endl;


}

int main()
{
	srand((unsigned int)time(NULL));
	vector<Worker> vWorker;

	//1. ����Ա��
	createWorker(vWorker);

	//��ӡ����
	/*for (auto it = vWorker.begin(); it != vWorker.end(); it++)
	{
		cout << "����: " << it->m_Name << " ����: " << it->m_Salary << endl;
	}
	cout << endl;*/
	
	//2. ���÷���
	multimap<int, Worker> mWorker;
	setGroup(vWorker, mWorker);
	
	//��ӡ����
	//for (auto it = mWorker.begin(); it != mWorker.end(); it++)
	//	cout << "ID: " << it->first << " ����: " << it->second.m_Name << " ����: " << it->second.m_Salary << endl;
	//cout << endl;


	//3. �Է���ķ�ʽ��ʾ
	showWorkByGroup(mWorker);

	return 0;
}