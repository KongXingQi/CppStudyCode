//#include <iostream>
//
//using namespace std;
//
//
//class Person
//{
//	//˽�г�Ա
//private:
//	string m_Name;	//����	�����д
//	int m_Age = 21;		//����	�����д
//	string m_Idol;	//ż��	����д
//
//public:
//	//��������				---	 д
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//��ȡ����				--- ��
//	string getName()
//	{
//		return m_Name;
//	}
//
//	//��������				--д (��Ч������֤)
//	void setAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			cout << "�������� ����������" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//
//	//��ȡ����			---��
//	int getAge()
//	{
//		return m_Age;
//	}
//
//
//	
//	//����ż��			--д
//	void setIdol(string Idol)
//	{
//		m_Idol = Idol;
//	}
//
//};
//
//
//
//
//
//
//int main()
//{
//	Person p;
//	p.setName("Ц��");
//	p.setAge(18);
//	cout << "����:" << p.getName() << " ����: " << p.getAge() << endl;
//	p.setIdol("���N9");
//	return 0;
//}