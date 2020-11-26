#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str1;
	cin >> str1;
	vector<string> arr;
	int left = 0;
	while (str1[left] != '\0')
	{
		string str;
		while (str1[left] >= '0'&&str1[left] <= '9')
		{
			str.push_back(str1[left]);
			left++;
		}
		if (!str.empty())
		{
			arr.push_back(str);
		}
		if ((str1[left]<'0' || str1[left]>'9')&&str1[left]!='\0')
		{
			left++;
		}
	}
	int max = 0;
	int flag = 0;
	if (!arr.empty())
	{
		for (int i = 0; i < arr.size(); i++)
		{
			if (arr[i].size()>max)
			{
				flag = i;
			}
		}
		cout << arr[flag];
	}
	else
		cout << '0' << endl;
}



//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace std;
//	class Solution {
//	public:
//		int MoreThanHalfNum_Solution(vector<int> numbers) {
//			sort(numbers.begin(), numbers.end());
//			int len = numbers.size();
//			int flag = numbers[len / 2];
//			int count = 0;
//			for (int i = 0; i<len; i++)
//			{
//				if (flag == numbers[i])
//				{
//					count++;
//				}
//			}
//			if (count >= len / 2)
//			{
//				return flag;
//			}
//			else
//				return 0;
//		}
//	};
//	int main()
//	{
//		Solution s;
//		vector<int> arr(5);
//		for (int i = 0; i < 5; i++)
//		{
//			cin >> arr[i];
//		}
//		cout<<s.MoreThanHalfNum_Solution(arr);
//	}