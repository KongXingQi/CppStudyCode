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
////定义学生结构体
//struct student
//{
//	string sName;					//学生姓名
//	int score;						//学生成绩
//};
//
////定义老师结构体
//struct teacher
//{
//	string tName;					//老师名字
//	struct student sArray[S_SIZE];	//学生数组
//};
//
//
////创建信息
//void createInform(struct teacher tArray[])
//{
//	string nameSeed = "ABCDEFGHIJKLMN";
//	for (int i = 0; i < T_SIZE; i++)
//	{
//		//老师姓名
//		tArray[i].tName = "teacher_";
//		tArray[i].tName += nameSeed[i];
//
//		//老师所带学生
//		for (int j = 0; j < S_SIZE; j++)
//		{
//			//学生姓名
//			tArray[i].sArray[j].sName = "student_";
//			tArray[i].sArray[j].sName += nameSeed[j];
//
//			//学生成绩
//			int t = rand() % 61 + 40;
//			tArray[i].sArray[j].score = t;
//		}
//	}
//
//}
//
////打印信息
//void printfInform(struct teacher tArray[])
//{
//	for (int i = 0; i < T_SIZE; i++)
//	{
//		cout << "老师名字: " << tArray[i].tName << endl;
//
//		for (int j = 0; j < S_SIZE; j++)
//		{
//			cout << "\t学生名字: " << tArray[i].sArray[j].sName << " 学生成绩: " << tArray[i].sArray[j].score << endl;
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
//	//创建信息
//	createInform(tArray);
//	//打印信息
//	printfInform(tArray);
//
//	return 0;
//}