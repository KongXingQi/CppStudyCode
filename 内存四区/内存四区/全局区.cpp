//#include <iostream>
////全局区
////全局变量， 静态变量 常量
//
//using namespace std;
//
//
////全局变量
//int g_a;
//int g_b;
//
////全局常量
//const int c_g_a = 0;
//const int c_g_b = 0;
//
//int main()
//{
//	//局部变量
//	int a;
//	int b;
//	cout << "局部变量a的地址:" << (int)&a << endl;
//	cout << "局部变量b的地址:" << (int)&b << endl;
//
//	//全局变量
//	cout << "全局变量g_a的地址:" << (int)&g_a << endl;
//	cout << "全局变量g_b的地址:" << (int)&g_b << endl;
//
//	//静态变量
//	static int s_a;
//	static int s_b;
//	cout << "静态变量s_a的地址:" << (int)&s_a << endl;
//	cout << "静态变量s_b的地址:" << (int)&s_b << endl;
//
//
//	//字符串常量
//	cout << "字符串常量的地址:" << (int)&"kxq" << endl;
//
//	//全局常量
//	cout << "全局常量c_g_a的地址:" << (int)&c_g_a << endl;
//	cout << "全局常量c_g_b的地址:" << (int)&c_g_b << endl;
//	
//	//局部常量
//	const int c_l_a = 0;
//	const int c_l_b = 0;
//	cout << "局部常量c_g_a的地址:" << (int)&c_l_a << endl;
//	cout << "局部常量c_g_a的地址:" << (int)&c_l_b << endl;
//
//
//	return 0;
//}