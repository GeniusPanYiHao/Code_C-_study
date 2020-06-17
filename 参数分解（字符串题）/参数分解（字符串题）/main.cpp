#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	int pos;
	while (getline(cin,str))
	{
		int count = 1;
		int a = 0;
		for (int i = 0; i<str.size(); i++)
		{
			if (str[i] == ' '&&a == 0)
			{
				count++;
			}
			if (str[i] == '"')
			{
				a ^= 1;
			}
		}
		cout << count<< endl;
		a = 0;
		for (int i = 0; i<str.size(); i++)
		{
			if (str[i] == '"')
			{
				a ^= 1;
			}
			if (str[i] != ' '&&a == 0)
				cout << str[i];
			if (a == 1 && str[i] != '"')
			{
				cout << str[i];
			}
			if (str[i] == ' '&&a == 0)
				cout << endl;
		}

	}
}