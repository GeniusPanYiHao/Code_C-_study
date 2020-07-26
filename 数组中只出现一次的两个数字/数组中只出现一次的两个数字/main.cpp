#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
		int a = 0;
		num1[0] = 0;
		num2[0] = 0;
		vector<int> arr;
		vector<int> arr1;
		if (data.empty())
			return;
		for (int i = 0; i<data.size(); i++)
		{
			a ^= data[i];
		}
		int index = 0;
		while ((a & 1) == 0)
		{
			a = a >> 1;
			index++;
		}
		for (int i = 0; i<data.size(); i++)
		{
			if ((data[i] >> index) & 1 == 1)
			{
				arr.push_back(data[i]);
			}
			else
				arr1.push_back(data[i]);
		}
		int count = 0;
		for (int i = 0; i<arr.size(); i++)
		{
			num1[0] ^= arr[i];
		}

		int sum = 0;
		for (int i = 0; i<arr1.size(); i++)
		{
			num2[0] ^= arr1[i];
		}
		cout << num1[0] << num2[0] << endl;

	}
};
int main()
{
	Solution s;
	int arr[6] = { 1, 1, 2, 2, 3, 4 };
	vector<int> data(arr, arr+6);
	int *num1 = { 0 }, *num2 = { 0 };
	s.FindNumsAppearOnce(data, num1, num2);
	
}