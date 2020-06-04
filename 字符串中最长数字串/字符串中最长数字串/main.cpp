#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	string str2;
	string max;
	int c = 0;
	getline(cin, str);
	for (int i = 0; i <= str.size(); i++)
	{
		if (str[i] >= '0'&&str[i] <= '9')
		{
			str2+= str[i];
		}
		else
		{
			if (str2.size()>max.size())
			{
				max = str2;
			}
			else
				str2.clear();
		}
	}
	cout << max << endl;
}