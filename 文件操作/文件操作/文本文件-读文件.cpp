//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
//
//void test01()
//{
//	//1. ���� <fstream>
//	
//	//2. ����������
//	ifstream ifs;
//
//	//3. ���ļ� ���ж��Ƿ�ɹ���
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��! " << endl;
//		return;
//	}
//
//	//4. ������
//	
//
//	////��һ�� �ո���ֹ
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�ڶ��� ��ȡһ��
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	//������ ��ȡһ��
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������ һ��һ����ȡ Ч�ʵ�
//	char c;
//	while ((c = ifs.get()) != EOF)	// EOF end of file �ļ�β��
//	{
//		cout << c;
//	}
//
//
//	//5. �ر��ļ�
//	ifs.close();
//
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}