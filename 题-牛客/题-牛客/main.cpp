#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	/**
	*
	* @param n int整型
	* @param m int整型
	* @param a int整型vector
	* @return int整型
	*/
	int solve(int n, int m, vector<int> &a) {
		// write code here
		int min = 0;
		int count = 0;
		int flag = 0;
		int flag1 = 0;
		int b = 0;
		if (n == 0)
			return 0;
		for (int i = 0; i<n; i++)
		{
			if (a[i] == 1)
			{
				count++;
			}
			if (count>min)
			{
				min = count;
				flag = i;
			}
			if (a[i] == 0)
			{
				count = 0;
			}
		}
		flag1 = flag - min;
		while (m--)
		{
			if (a[flag1] == 0)
			{
				min++;
				flag1--;
			}
			else
			{
				min++;
				flag1--;
			}
		}
		for (int i = flag1; i >= 0; i--)
		{
			if (a[i] == 1)
			{
				min++;
			}
			else
				break;
		}
		return min;

	}
};
int main()
{
	int n=6, m=1;
	vector<int> arr;
	arr = { 1, 0, 0, 1, 1, 1 };
	Solution S;
	S.solve(n, m,arr);
}