#include <iostream>

using namespace std;


//������
class Animal 
{
public:

	int m_Age;
};

//������̳���������μ̳е����� virtual
//�ڼ̳�֮ǰ���Ϲؼ��� virtual �����̳�
// Animal�� ��Ϊ�����
//����
class Sheep :virtual public Animal {};

//����
class Tuo : virtual public Animal {};

//������
class SheepTuo :public Sheep, public Tuo {};



void test01()
{
	SheepTuo st;

	//����������� ֻ��һ�ݼ��ɣ����μ̳е������������ݣ���Դ�˷ѡ� 
	//��̳к������൱��һ������
	
	st.Sheep::m_Age = 18;


	st.Tuo::m_Age = 28;
	//��18�޸ĳ���28
	//��̳���ʵ�ǲ�����һ�������ָ�룬���ָ��ָ��������������м�¼��һ��ƫ������
	//ָ����ͬ��һ������m_Age; ����˵�����������󣬹���һ���ڴ棬���� �Ĳ�������� �޸Ĳ�����
	


	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;

}


int main()
{
	test01();
	return 0;
}