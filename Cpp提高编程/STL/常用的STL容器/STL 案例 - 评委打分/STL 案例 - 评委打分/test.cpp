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

//������λѡ��
void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;

		Person p(name, score);
		v.push_back(p);
	}
}

//���
void setScore(vector<Person>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		deque<int> d; //������ķ����ݴ浽deque��ȥ��
		//10λ��ʦ���
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}

		//ȥ����߷ֺ���ͷ�
		sort(d.begin(), d.end());
		d.pop_back();
		d.pop_front();
		
		//��ƽ����
		int sum = 0;
		for (auto dit = d.begin(); dit != d.end(); dit++)
			sum += *dit;

		v[i].m_Score = sum / (int)d.size();
	}


}

void showScore(vector<Person> &v)
{
	for (int i = 0; i < v.size(); i++)
		cout << "����: " << v[i].m_Name << " �ɼ�: " << v[i].m_Score << endl;
}

int main()
{
	srand((unsigned int)time(NULL));
	
	vector<Person> v;

	createPerson(v);	//����ѡ��

	setScore(v);		//���óɼ�

	showScore(v);		//��ʾ�ɼ�

	return 0;
}