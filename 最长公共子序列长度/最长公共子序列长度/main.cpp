#define _CRT_SECURE_NO_WARNINGS 1
// write your code here cpp
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string str1;
	string str2;
	while (getline(cin, str1))
	{
		getline(cin, str2);

		int count = 0;
		for (int i = 0; i<str1.size() - 1; i++)
		{
			for (int a = i + 1; a<str1.size(); a++)
			{
				if (str1[i] == str1[a])
				{
					str1.erase(i, 1);
				}
			}
		}
		for (int i = 0; i<str2.size() - 1; i++)
		{
			for (int a = i + 1; a<str2.size(); a++)
			{
				if (str2[i] == str2[a])
				{
					str2.erase(i, 1);
				}
			}
		}
		for (int i = 0; i<str1.size(); i++)
		{
			for (int a = 0; a<str2.size(); a++)
			{
				if (str1[i] == str2[a])
				{
					count++;
				}
			}
		}
		cout << count << endl;
	}
}