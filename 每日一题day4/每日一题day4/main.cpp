#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int M;
	cin >> M;
	int N;
	cin >> N;
	string str1;
	string str2 = "0123456789ABCDEF";
	int flag = 0;
	vector<int> arr;
	if (M < 0)
	{
		flag = 1;
		M = -M;
	}
	while (M)
	{
		str1.push_back(str2[M%N]);
		M = M / N;
	}
	if (flag==1)
	{
		str1.push_back('-');
	}
	reverse(str1.begin(), str1.end());
	cout << str1 << endl;
}