#include <iostream>
#include <string>

#define H_SIZE 5

using namespace std;



struct hero
{
	string name;
	int age;
	string sex;
};

//创建
void createInform(hero hArray[])
{
	string nameSeed = "ABCDEFGHIJK";		//A是字符
	string sexSeedArr[] = {"男","女"};		//男是字符串
	//string sexSeed = "男女";ERROR
	for (int i = 0; i < H_SIZE; i++)
	{
		//名字
		hArray[i].name = "heroName_";
		hArray[i].name += nameSeed[i];

		//年龄
		int t1 = rand() % 20 + 18;
		hArray[i].age = t1;

		//性别
		int t2 = rand() % 2; // 0 1
		hArray[i].sex = sexSeedArr[t2];
		//hArray[i].sex += sexSeed[t2];ERROR 
	}
}



void bubbleSort(hero hArray[])
{
	for (int i = 0; i < H_SIZE - 1; i++)
	{
		for (int j = 0; j < H_SIZE - i - 1; j++)
			if (hArray[j].age > hArray[j + 1].age)
				swap(hArray[j], hArray[j + 1]);

	}
}


void printfInform(hero hArray[])
{
	for (int i = 0; i < H_SIZE; i++)
	{
		cout << "姓名:" << hArray[i].name << " 年龄:" << hArray[i].age << " 性别:" << hArray[i].sex << endl;
	}
}




int main()
{
	srand((unsigned)time(NULL));
	hero hArray[H_SIZE];

	//创建信息
	createInform(hArray);

	cout << "排序前:" << endl;
	//打印信息
	printfInform(hArray);
	//排序

	bubbleSort(hArray);

	cout << "排序后:" << endl;
	//打印信息
	printfInform(hArray);

	return 0;
}