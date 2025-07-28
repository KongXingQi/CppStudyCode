#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

#define W_NUM 10	//工人数量

#define CEHUA 0		//策划
#define MEISHU 1	//美术
#define YANFA	2	//研发


class Worker
{
public:
	Worker(string name, int s)
	{
		this->m_Name = name;
		this->m_Salary = s;
	}

	string m_Name;	
	int m_Salary;	//工资
}; 

//1. 创建员工
void createWorker(vector<Worker>& v)
{
	//W_NUM个字符
	string nameSeed = "ABCDEFGHIJ";


	for (int i = 0; i < W_NUM; i++)
	{
		string name = "员工";
		name += nameSeed[i];

		int salary = rand() % 10001 + 10000;

		Worker w(name, salary);

		v.push_back(w);
 	}


}


//2. 设置分组
void setGroup(vector<Worker>& vWorker, multimap<int, Worker>& mWorker)
{
	for (int i = 0; i < vWorker.size(); i++)
	{
		int depID = rand() % 3; // 0 1 2  -----> 策划·美术·研发
		//每个工人随机生成id后 插入到map中去。
		mWorker.insert(make_pair(depID, vWorker[i]));
	}
}

//3. 以分组的方式显示
void showWorkByGroup(multimap<int, Worker>& mWorker)
{
	cout << "策划部门: " << endl;
	auto it = mWorker.find(CEHUA);
	int cnt = (int)mWorker.count(CEHUA);
	int index = 0;
	for (; it != mWorker.end() && index < cnt; it++, index++)
		cout << "姓名: " << it->second.m_Name << " 工资: " << it->second.m_Salary << endl;

	cout << "--------------------------------------" << endl;
	cout << "美术部门: " << endl;
	it = mWorker.find(MEISHU);
	cnt = (int)mWorker.count(MEISHU);
	index = 0;
	for (; it != mWorker.end() && index < cnt; it++, index++)
		cout << "姓名: " << it->second.m_Name << " 工资: " << it->second.m_Salary << endl;


	cout << "--------------------------------------" << endl;
	cout << "研发部门: " << endl;
	it = mWorker.find(YANFA);
	cnt = (int)mWorker.count(YANFA);
	index = 0;
	for (; it != mWorker.end() && index < cnt; it++, index++)
		cout << "姓名: " << it->second.m_Name << " 工资: " << it->second.m_Salary << endl;


}

int main()
{
	srand((unsigned int)time(NULL));
	vector<Worker> vWorker;

	//1. 创建员工
	createWorker(vWorker);

	//打印测试
	/*for (auto it = vWorker.begin(); it != vWorker.end(); it++)
	{
		cout << "姓名: " << it->m_Name << " 工资: " << it->m_Salary << endl;
	}
	cout << endl;*/
	
	//2. 设置分组
	multimap<int, Worker> mWorker;
	setGroup(vWorker, mWorker);
	
	//打印测试
	//for (auto it = mWorker.begin(); it != mWorker.end(); it++)
	//	cout << "ID: " << it->first << " 姓名: " << it->second.m_Name << " 工资: " << it->second.m_Salary << endl;
	//cout << endl;


	//3. 以分组的方式显示
	showWorkByGroup(mWorker);

	return 0;
}