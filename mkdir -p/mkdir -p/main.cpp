#define _CRT_SECURE_NO_WARNINGS 1
// write your code here cpp
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		vector<string> str(n);
		vector<bool> a(n,true);
		for (int i = 0; i<str.size(); i++)
		{
			cin >> str[i];
		}
		sort(str.begin(), str.end());
		for (int i = 0; i < str.size() - 1; i++)
		{
			if (str[i] == str[i + 1])
			{
				a[i] =false;
			}
			else if (str[i].size() < str[i + 1].size() && str[i] == str[i + 1].substr(0, str[i].size()) && str[i + 1][str[i].size()] == '/')
			{
				a[i] = false;
			}
		}
			for (int i = 0; i < str.size(); i++)
			{
				if (a[i])
				{
					cout << "mkdir -p " << str[i] << endl;
				}
			}
	}
}