//#include <iostream>
//
//using namespace std;
//
//
//
//template<typename T>
//void mySwap(T &a, T &b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//
//template<typename T>
//void mySort(T &arr, int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		int maxIndex = i;
//		for (int j = i + 1; j < size; j++)
//		{
//			if (arr[j] > arr[maxIndex])
//				maxIndex = j;
//		}
//
//		mySwap(arr[i], arr[maxIndex]);
//	}
//}
//
//void test01()
//{
//	int arr[] = { 1,200,30,400,50 };
//	//char arr[] = "pkshdas";
//	int k = sizeof(arr) / sizeof(arr[1]);
//	mySort(arr, k);
//
//	for (int i = 0; i < k; i++)
//		cout << arr[i] << " ";
//	
//}
//
//int main()
//{
//	
//	test01();
//	return 0;
//}