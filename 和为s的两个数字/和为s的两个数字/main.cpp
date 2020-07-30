#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	void FindNumbersWithSum(vector<int> array, int sum) {
		int j = array.size() - 1;
		vector<int>a;
		int i = 0;
		int max = 0;
		while (i<j)
		{
			int max = array[i] + array[j];
			if (max>sum)
			{
				j--;
			}
			else if (max<sum)
			{
				i++;
			}
			else
			{
				a.push_back(array[i]);
				a.push_back(array[j]);
				break;
			}
		}
		cout << a[0] <<" "<<a[1] << endl;
	}
};

int main()
{
	Solution S;
	vector<int>arr;
	int sum;
	cin >> sum;
	arr = { 1, 2, 3, 4, 5 };
	S.FindNumbersWithSum(arr, sum);
}