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

//����
void createInform(hero hArray[])
{
	string nameSeed = "ABCDEFGHIJK";		//A���ַ�
	string sexSeedArr[] = {"��","Ů"};		//�����ַ���
	//string sexSeed = "��Ů";ERROR
	for (int i = 0; i < H_SIZE; i++)
	{
		//����
		hArray[i].name = "heroName_";
		hArray[i].name += nameSeed[i];

		//����
		int t1 = rand() % 20 + 18;
		hArray[i].age = t1;

		//�Ա�
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
		cout << "����:" << hArray[i].name << " ����:" << hArray[i].age << " �Ա�:" << hArray[i].sex << endl;
	}
}




int main()
{
	srand((unsigned)time(NULL));
	hero hArray[H_SIZE];

	//������Ϣ
	createInform(hArray);

	cout << "����ǰ:" << endl;
	//��ӡ��Ϣ
	printfInform(hArray);
	//����

	bubbleSort(hArray);

	cout << "�����:" << endl;
	//��ӡ��Ϣ
	printfInform(hArray);

	return 0;
}