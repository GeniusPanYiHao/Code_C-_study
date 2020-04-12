#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int input(int m)
{
	int n = m;
	int e = n;
	while (e >= 2)
	{
		n += e / 2;
		if (e % 2 == 0)//:如果空瓶为偶数，则剩余的空瓶
		{
			e = e / 2;
		}
		else//:如果空瓶为奇数，则剩余空瓶数
		{
			e = e / 2 + 1;
		}
	}
	return n;
}
int main()
{
	int n = input(20);
	printf("%d", n);
	return 0;
}
