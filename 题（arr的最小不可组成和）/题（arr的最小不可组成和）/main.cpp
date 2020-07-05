#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<functional>
#include<vector>
using namespace std;
int getFirstUnFormedNum(vector<int> arr, int len) {
	sort(arr.begin(), arr.end(), less<int>());
	int a = arr[0];
	int b = 0;
	vector<int> ARR;
	vector<int> BRR;
	int s = 0;
	for (int i = 0; i<len; i++)
	{
		b += arr[i];
	}
	for (int i = 0; i < len; i++)
	{
		ARR.push_back(arr[i]);
	}
	for (int i = 0; i<len; i++)
	{
		int sum =arr[i];
		for (int j = i+1; j<len; j++)
		{
			sum +=arr[j];
			ARR.push_back(sum);
		}
	}
	sort(ARR.begin(), ARR.end(), less<int>());
	for (int i = a; i <= b; i++)
	{
		int flag = 0;
		for (int j = 0; j < ARR.size(); j++)
		{
			if (i == ARR[j])
			{
				flag = i;
				break;
			}
		}
		if (flag == 0)
		{
			s = i;
		}
	}
	return s;
}
int main()
{
	int len;
	cin >> len;
	vector<int> arr(len);
	for (int i = 0; i < len; i++)
	{
		cin >> arr[i];
	}
	cout << getFirstUnFormedNum(arr, len) << endl;
}