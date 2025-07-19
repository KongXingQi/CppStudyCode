//#include <iostream>
//
//using namespace std;
//
//
//class Person
//{
//	//私有成员
//private:
//	string m_Name;	//姓名	允许读写
//	int m_Age = 21;		//年龄	允许读写
//	string m_Idol;	//偶像	允许写
//
//public:
//	//设置姓名				---	 写
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//获取姓名				--- 读
//	string getName()
//	{
//		return m_Name;
//	}
//
//	//设置年龄				--写 (有效性能验证)
//	void setAge(int age)
//	{
//		if (age < 0 || age > 150)
//		{
//			cout << "输入有误 请重新输入" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//
//	//获取年龄			---读
//	int getAge()
//	{
//		return m_Age;
//	}
//
//
//	
//	//设置偶像			--写
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
//	p.setName("笑脸");
//	p.setAge(18);
//	cout << "姓名:" << p.getName() << " 年龄: " << p.getAge() << endl;
//	p.setIdol("念旧N9");
//	return 0;
//}