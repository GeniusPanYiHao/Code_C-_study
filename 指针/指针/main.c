#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct Test
{
	int num;
	char pName;
	short sData;
	char cha[2];
	short s[4];
}*p;
int main()
{
	char str1[10]="cdvgvr";
	/*char *str1="abcd";*/
	char *str2 = "abcde";
	/*strncpy(str1, str2, 3);*/
	/*char *str3 = strstr(str1, str2);*/
	memcpy(str1, str2, 2);
	printf("%s", str1);
	/*if (strcmp(str1, str2) < 0)
		printf("str1 < str2");
	if (strcmp(str1, str2) == 0)
		printf("str1 = str2");
	if (strcmp(str1, str2) > 0)
		printf("str1 > str2");*/
	//printf("%d\n", strlen(str1));
	/*strcpy(str1, str2);*/
	/*strcat(str1, str2);
	printf("%s",str1);*/
	/*if (str1 == str2)
	{
		printf("true");
	}
	else
		printf("false");*/


	/*char *a[] = { "work", "at", "abcdef" };
	char** pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;*/
	/*printf("%p\n", p);
	printf("%p\n", p + 0x1);
	printf("%p\n", (unsigned long)p + 0x1);
	printf("%p\n", (unsigned int*)p + 0x1);*/
	/*int n = 10;
	char* pc = (char*)&n;
	int* pi = &n;

	printf("%p\n", &n);
	printf("%p\n", pc);
	printf("%p\n", pc+1);
	printf("%p\n", pi);
	printf("%p\n", pi+1);*/
	//int arr[5] = { 0, 1, 2, 3, 4 };
	//int *p = arr;//:指针存放数组的首元素地址。p+i变为数组下标为i
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d\n",*(p + i));
	//}

	/*int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int*)(&a + 1);
	printf("%d%d", *(a+1), *(ptr - 1));*/
}