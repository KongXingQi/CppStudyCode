#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
#include <ctime>

using namespace std;

class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}




	string m_Name;
	int m_Score;
};

//创建五位选手
void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);
		v.push_back(p);
	}
}

//打分
void setScore(vector<Person>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		deque<int> d; //将打入的分先暂存到deque中去。
		//10位老师打分
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		//去掉最高分和最低分
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		
		//求平均分
		int sum = 0;
		for (auto dit = d.begin(); dit != d.end(); dit++)
			sum += *dit;

		v[i].m_Score = sum / (int)d.size();
	}


}

void showScore(vector<Person> &v)
{
	for (int i = 0; i < v.size(); i++)
		cout << "姓名: " << v[i].m_Name << " 成绩: " << v[i].m_Score << endl;
}

int main()
{
	srand((unsigned int)time(NULL));
	
	vector<Person> v;

	createPerson(v);	//构造选手

	setScore(v);		//设置成绩

	showScore(v);		//显示成绩

	return 0;
}