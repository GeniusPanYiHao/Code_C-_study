#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	int StrToInt(string str) {
		if (str.empty())
			return 0;
		int sum = 0;
		if (str[0] == '+' || str[0] == '-')
		{
			int flag = 0;
			for (int i = 1; i<str.size(); i++)
			{

				if (str[i] <= '0'&&str[i] >= '9')
				{
					flag++;
				}
			}
			if (flag == 0)
			{
				for (int i = 1; i<str.size(); i++)
				{
					sum = (str[i]-'0') + sum * 10;
				}
				if (str[0] == '+')
					return sum;
				if (str[0] == '-')
					return 0 - sum;
			}
			else
			{
				return 0;
			}
		}
		else if (str[0] >= '0'&&str[0] <= '9')
		{
			int flag = 0;
			for (int i = 0; i < str.size(); i++)
			{

				if (str[i] <= '0'&&str[i] >= '9')
				{
					flag++;
				}
			}
			if (flag == 0)
			{
				for (int i = 0; i < str.size(); i++)
				{
					sum = (str[i] - '0') + sum * 10;
				}
				return sum;
			}
			else
				return 0;
		}
		else
			return 0;
	}
};
int main()
{
	Solution s;
	string str1;
	cin >> str1;
	cout << s.StrToInt(str1) << endl;
}