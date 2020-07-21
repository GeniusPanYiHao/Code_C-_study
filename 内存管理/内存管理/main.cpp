#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
int main()
{
	int globalValue = 1;
	static int Staticglobal = 2;
	void test()
	{
		static int localVal = 3;
		int localVal = 4;
		char str2[] = "abcde";
		int* ptr1 = (int*)malloc(sizeof(int)* 4);
		int* ptr2 = (int*)realloc(4, sizeof(int));
		int* ptr3 = (int*)malloc(ptr2, sizeof(int)* 4);
		free(ptr1);
		free(ptr3);
	}
	void test()
	{
		int* ptr1 = new int;
		int* ptr2 = new int(10);
		int* ptr3 = new int[5];

		delete ptr1;
		delete ptr2;
		delete[] ptr3;
	}
}