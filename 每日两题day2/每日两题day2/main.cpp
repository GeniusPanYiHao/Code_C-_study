#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i<n; i++)
	{
		cin >> arr[i];
	}
	int count = 0;
	int left = 0;
	int right = left + 1;
	while (left<n)
	{
		if (arr[right]>arr[left])
		{
			while (arr[right] >= arr[left] && left<n)
			{
				left = right;
				right++;
				count++;
			}
		}
		else if (arr[right == arr[left]])
		{
			left++;
			right = left + 1;
		}
		else
		{
			while (arr[right] <= arr[left] && left<n)
			{
				left++;
				right=left+1;
				count++;
			}
		}
	}
	cout << count << endl;
}






//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string str1;
//	getline(cin, str1);
//	int left = 0;
//	int right = str1.size() - 1;
//	while (left<right)
//	{
//		swap(str1[left], str1[right]);
//		left++;
//		right--;
//	}
//	auto it = str1.begin();
//	auto start = it;
//	while (it != str1.end())
//	{
//		while (it != str1.end() && *it != ' ')
//		{
//			it++;
//		}
//		reverse(start, it);
//		while (it != str1.end() && *it == ' ')
//		{
//			++it;
//		}
//		start = it;
//	}
//	cout << str1 << endl;
//}