#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Solution {
public:
	int NumberOf1Between1AndN_Solution(int n)
	{
		int c = 0;
		for (int i = 1; i <= n; i++)
		{
			c += is1(i);
		}
		return c;
	}
public:
	int is1(int a)
	{
		int count = 0;
		while (a)
		{
			int b = a % 10;
			if (b == 1)
			{
				count++;
			}
			a = a / 10;
		}
		return count;
	}
};
int main()
{
	Solution s;
	int n;
	cin >> n;
	cout << s.NumberOf1Between1AndN_Solution(n) << endl;;
}