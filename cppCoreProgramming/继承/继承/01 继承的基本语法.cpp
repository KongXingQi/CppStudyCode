//#include <iostream>
//
//using namespace std;
//
//
////重复代码太多了
////class Java
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
////	}
////	void left()
////	{
////
////		cout << "Java、Python、C++ ... (公共分类列表)" << endl;
////	}
////	void content()
////	{
////		cout << "Java学科视频" << endl;
////	}
////
////};
////
////class Python
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
////	}
////	void left()
////	{
////
////		cout << "Java、Python、C++ ... (公共分类列表)" << endl;
////	}
////	void content()
////	{
////		cout << "python学科视频" << endl;
////	}
////
////};
////
////class Cpp
////{
////public:
////	void header()
////	{
////		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
////	}
////	void footer()
////	{
////		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
////	}
////	void left()
////	{
////
////		cout << "Java、Python、C++ ... (公共分类列表)" << endl;
////	}
////	void content()
////	{
////		cout << "Cpp学科视频" << endl;
////	}
////
////};
//
////继承
//
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		
//		cout << "Java、Python、C++ ... (公共分类列表)" << endl;
//	}
//};
////继承的好处：减少重复的代码 
////语法  class 子类 : 继承方式 父类
////子类  也称 派生类
////父类  也称 基类
//class Java : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//class Cpp : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Cpp学科视频" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java下载视频页面如下: " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//
//	cout << " ------------------------------- " << endl;
//	cout << "Python下载视频页面如下: " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//
//	cout << " ------------------------------- " << endl;
//	cout << "C++下载视频页面如下: " << endl;
//	Cpp cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//
//}
//
//
//
//
//int main()
//{
//	test01();
//
//	return 0;
//}