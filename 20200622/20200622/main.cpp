#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[10] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', 0 }, *p;
	int i;
	i = 8;
	p = a + i;
	printf("%s\n", a);
}