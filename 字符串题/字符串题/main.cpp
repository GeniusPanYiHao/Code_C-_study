#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1;
	string str2;
	string str3;
	getline(cin, str1);
	getline(cin, str2);
	int i = 0;
	while (str2[i] != NULL)
	{
		int a = 0;
		int i = 0;
		while (a<str1.size())
		{
			if (str1[a] != str2[i])
			{
				str3[i++] = str1[a];
			}
			a++;
		}
	}
	cout << str3 << endl;
}