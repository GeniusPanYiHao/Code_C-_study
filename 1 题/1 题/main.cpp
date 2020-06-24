#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool isHuiwen(string str)
{
	string str1 = str;
	reverse(str.begin(), str.end());
	if (str1 == str)
		return true;
	else
		return false;
}
int Insert(string str2, string str3)
{
	string str4;
	int count = 0;
	for (int i = 0; i<str2.size(); i++)
	{
		str4 = str2;
		str4.insert(i, str3);
		if (isHuiwen(str4))
		{
			count++;
		}
	}
	return count;
}
int main()
{
	string str1;
	string str2;
	getline(cin, str1);
	getline(cin, str2);
	cout << Insert(str1, str2) << endl;
}