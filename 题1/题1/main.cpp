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
		if (e % 2 == 0)//:�����ƿΪż������ʣ��Ŀ�ƿ
		{
			e = e / 2;
		}
		else//:�����ƿΪ��������ʣ���ƿ��
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
