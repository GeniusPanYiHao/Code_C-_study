#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
void replaceSpace(char *str, int length) {
		int count = 0;
		for (int i = 0; i<length; i++)
		{
			if (str[i] == ' ')
				count++;
		}
		int orginallength = length;
		int newlength = orginallength + 2 * count;
		int a = orginallength - 1;
		int b = newlength - 1;
		while (a >= 0 && b>a)
		{
			if (str[a] != ' ')
			{
				str[b] = str[a];
				a--;
				b--;
			}
			else
			{
				str[b] = '0';
				str[b - 1] = '2';
				str[b - 2] = '%';
				a--;
				b = b - 3;
			}
		}
		cout << str << endl;
	}
int main()
{
	char str[] = "we are friends";
	int length = 15;
	replaceSpace(str, length);
}