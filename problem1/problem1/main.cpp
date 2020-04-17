#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Solution 
{
public:
	int NumberOf1(int n) 
	{
		int count = 0;
		while (n != 0) 
		{
			count += (n & 1);
			n >>= 1;
		}
		return count;
	}
};
int main()
{
	Solution d1;
	cout<<d1.NumberOf1(-1024);
}