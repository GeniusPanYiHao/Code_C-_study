#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//void print(int(*arr)[5], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d", arr[i][j]);
//		}
//	}
//}


//:用指针实现冒泡排序
void order(int *p, int n)
{
	int a;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (*(p +j)>*(p +j + 1))
			{
				a = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = a;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << *(p + i) << endl;
	}
}
int main()
{
	//int i;
	//int &ri = i;//:ri指向i;二者绑定在一起  ri相当于i的另外一个名字
	//i = 5;
	//ri = 10;//:相当于把10赋给了i
	//cout << i << " " << ri << endl;

	/*int val;
	int &ri = val;
	val = 5;
	ri = 10;
	int i = ri;
	int ii = val;
	cout << i <<ii<< endl;*/

	/*int value = 42;
	int *p = &value;
	*p = 0;
	cout << *p << " " << value << " "<<p<<endl;*/
	/*int val=1;
	int *p = &val;
	*p = 5;
	cout << val << endl;*/
	/*int i = 42;
	int *p = &i;
	*p = *p**p;
	cout << i << endl;*/

	//指针运算
	/*int arr[5];
	int *p;
	for (p = &arr[0]; p < &arr[5];)
	{
		*p++= 0;
	}
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}*/
	/*int val = 5;
	short val1 =5;
	int *p = &val;
	int *p1 = p+1;
	short *p2 = &val1;
	short *p3 = p2+1;
	cout << p << " " << p1 <<" "<< p2<<"  "<<p3<<endl;*/

	/*int arr[5] = { 0 ,1,2,3,4};
	cout << arr <<endl;
	cout << &arr << endl;
	cout << arr + 1 << endl;
	cout << &arr + 1 << endl;*/

	/*int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	print(arr, 3, 5);*/
	int arr[10] = { 2, 1, 0, 5, 3 ,4,7,6,8,9};
	int n = sizeof(arr)/sizeof(arr[0]);
	order(arr, n);
}