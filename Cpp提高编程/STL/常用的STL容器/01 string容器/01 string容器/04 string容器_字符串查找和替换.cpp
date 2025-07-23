//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
////字符串查找和替换
//
////1. 查找
//void test01()
//{
//	string str1 = "decdefg";
//	//find	从右往左
//	int pos = str1.find("de");	//有返回下标 没有返回-1	第一次出现
//	if (pos == -1)
//		cout << "未找到字符串" << endl;
//	else
//		cout << "pos = " << pos << endl;
//
//	//rfind 从左往右 
//	pos = str1.rfind("de");	//有返回下标 没有返回-1	最后一次出现
//	if (pos == -1)
//		cout << "未找到字符串" << endl;
//	else
//		cout << "pos = " << pos << endl;
//}
//
//
////2. 替换
//void test02()
//{
//	string str1 = "abcdefg";
//
//	//从1号位置起，3个字符替换为"1111"
//	str1.replace(1, 3,"1111");
//	cout << "str1 = " << str1 << endl;
//
//}
//
//int main()
//{
//
//	//test01();
//	test02();
//	return 0;
//}