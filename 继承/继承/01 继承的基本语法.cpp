//#include <iostream>
//
//using namespace std;
//
//
////�ظ�����̫����
////class Java
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
////	}
////	void left()
////	{
////
////		cout << "Java��Python��C++ ... (���������б�)" << endl;
////	}
////	void content()
////	{
////		cout << "Javaѧ����Ƶ" << endl;
////	}
////
////};
////
////class Python
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
////	}
////	void left()
////	{
////
////		cout << "Java��Python��C++ ... (���������б�)" << endl;
////	}
////	void content()
////	{
////		cout << "pythonѧ����Ƶ" << endl;
////	}
////
////};
////
////class Cpp
////{
////public:
////	void header()
////	{
////		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
////	}
////	void footer()
////	{
////		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
////	}
////	void left()
////	{
////
////		cout << "Java��Python��C++ ... (���������б�)" << endl;
////	}
////	void content()
////	{
////		cout << "Cppѧ����Ƶ" << endl;
////	}
////
////};
//
////�̳�
//
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		
//		cout << "Java��Python��C++ ... (���������б�)" << endl;
//	}
//};
////�̳еĺô��������ظ��Ĵ��� 
////�﷨  class ���� : �̳з�ʽ ����
////����  Ҳ�� ������
////����  Ҳ�� ����
//class Java : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
//class Python : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//class Cpp : public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Cppѧ����Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java������Ƶҳ������: " << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//
//	cout << " ------------------------------- " << endl;
//	cout << "Python������Ƶҳ������: " << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//
//	cout << " ------------------------------- " << endl;
//	cout << "C++������Ƶҳ������: " << endl;
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