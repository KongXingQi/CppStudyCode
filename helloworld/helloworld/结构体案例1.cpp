//#include <iostream>
//#include <string>
//#include <ctime>
//
//#define S_SIZE 10
//#define T_SIZE 5
//
//using namespace std;
//
//
////����ѧ���ṹ��
//struct student
//{
//	string sName;					//ѧ������
//	int score;						//ѧ���ɼ�
//};
//
////������ʦ�ṹ��
//struct teacher
//{
//	string tName;					//��ʦ����
//	struct student sArray[S_SIZE];	//ѧ������
//};
//
//
////������Ϣ
//void createInform(struct teacher tArray[])
//{
//	string nameSeed = "ABCDEFGHIJKLMN";
//	for (int i = 0; i < T_SIZE; i++)
//	{
//		//��ʦ����
//		tArray[i].tName = "teacher_";
//		tArray[i].tName += nameSeed[i];
//
//		//��ʦ����ѧ��
//		for (int j = 0; j < S_SIZE; j++)
//		{
//			//ѧ������
//			tArray[i].sArray[j].sName = "student_";
//			tArray[i].sArray[j].sName += nameSeed[j];
//
//			//ѧ���ɼ�
//			int t = rand() % 61 + 40;
//			tArray[i].sArray[j].score = t;
//		}
//	}
//
//}
//
////��ӡ��Ϣ
//void printfInform(struct teacher tArray[])
//{
//	for (int i = 0; i < T_SIZE; i++)
//	{
//		cout << "��ʦ����: " << tArray[i].tName << endl;
//
//		for (int j = 0; j < S_SIZE; j++)
//		{
//			cout << "\tѧ������: " << tArray[i].sArray[j].sName << " ѧ���ɼ�: " << tArray[i].sArray[j].score << endl;
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	teacher tArray[T_SIZE];
//
//	//������Ϣ
//	createInform(tArray);
//	//��ӡ��Ϣ
//	printfInform(tArray);
//
//	return 0;
//}