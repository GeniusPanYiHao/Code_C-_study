#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int StrToInt(string str) {
		int count = 0;
		auto it = str.begin() + 1;
		while (it != str.end())
		{
			if (*it<'0' || *it>'9')
			{
				count++;
			}
			it++;
		}
		int sum = 0;
		if (count == 0)
		{
			if (str[0] != '-' && str[0] != '+')
			{
				for (int i = 0; i<str.size(); i++)
				{
					sum = sum * 10 + str[i] - '0';
				}
				return sum;
			}
			if (str[0] == '+')
			{
				for (int i = 1; i<str.size(); i++)
				{
					sum = sum * 10 + str[i] - '0';
				}
				return sum;
			}
			if (str[0] == '-')
			{
				for (int i = 1; i<str.size(); i++)
				{
					sum = sum * 10 + str[i] - '0';
				}
				return -sum;
			}
		}
		return 0;
	}
};
int main()
{
	Solution s;
	string str;
	cin >> str;
	cout<<s.StrToInt(str);
}