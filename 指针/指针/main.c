#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	/*int n = 10;
	char* pc = (char*)&n;
	int* pi = &n;

	printf("%p\n", &n);
	printf("%p\n", pc);
	printf("%p\n", pc+1);
	printf("%p\n", pi);
	printf("%p\n", pi+1);*/
	int arr[5] = { 0, 1, 2, 3, 4 };
	int *p = arr;//:ָ�����������Ԫ�ص�ַ��p+i��Ϊ�����±�Ϊi
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n",*(p + i));
	}
}