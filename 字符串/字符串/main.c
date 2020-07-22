#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	/*char str1[] = "abcde  bf";
	char *str3;
	str3 = strstr(str1,"abcde");
	std::cout <<str3 << std::endl;*/
	for (int i = 0; i < 10; i++)
	{
		printf("%d:%s\n", strerror(i));

	}
}