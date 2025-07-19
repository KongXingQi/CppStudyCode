//#include <iostream>
//#include <fstream>
//
//using namespace std;
//
//
//class Person
//{
//public:
//
//
//	char m_Name[64];
//	int m_Age;
//};
//
//
//void test01()
//{
//	//1. 包含头文件
//
//
//	//2. 创建流对象同时打开也可以
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	//3. 打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	//4. 写文件
//	Person p = { "kxq", 18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	//5. 关闭文件
//	ofs.close();
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}