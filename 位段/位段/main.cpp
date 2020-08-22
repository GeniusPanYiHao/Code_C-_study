#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct A
{
	int a : 2;
	int b : 2;
	int c : 2;
	int d : 2;
	int e : 22;
};
int main()
{
	printf("%d", sizeof(A));
}