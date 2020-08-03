#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int LastRemaining_Solution(int n, int m)
	{
		vector<int> a;
		for (int i = 0; i<n; i++)
		{
			a.push_back(i);
		}
		int left = -1;
		int b = 0;
		while (n != 1)
		{
			for (int i = 0; i<m; i++)
			{

				left++;
				if (left == a.size())
				{
					left = b;
				}
			}
			a.erase(a.begin() + left);
			if (left == a.size())
			{
				left = 0;
			}
			n--;
		}
		if (a.size()>1)
			return -1;
	}
};
int main()
{
	Solution s;
	int n, m;
	cin >> n >> m;
	s.LastRemaining_Solution(n, m);
}