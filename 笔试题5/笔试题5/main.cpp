#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//#include<stack>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string str1;
//	cin >> str1;
//	int left = 0;
//	int right = str1.size() - 1;
//	while (left<right)
//	{
//		swap(str1[left],str1[right]);
//		left++;
//		right--;
//	}
//	cout << str1 << endl;
//}


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		vector<int>arr(n);
		for (int i = 0; i<n; i++)
		{
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		int sum = 0;
		for (int i = 0; i<arr.size(); i++)
		{
			sum += arr[i];
		}
		int average = sum / n;
		int count = 0;
		int left = 0;
		int right = arr.size() - 1;
		while (left<right)
		{
			if (arr[right]> average)
			{
				arr[right] = arr[right] - 2;
				if (arr[right] < average)
				{
					right--;
				}
			}
			else
				right--;
			if (arr[left]<average)
			{
				arr[left] = arr[left] + 2;
				count++;
				if (arr[left] >= average)
				{
					left++;
				}
			}
			else
			{
				left++;
			}
		}
		int flag = 0;
		for (int i = 0; i<arr.size(); i++)
		{
			if (arr[i]==average)
				flag++;
		}
		if (flag == n)
			cout << count << endl;
		else
			cout << "-1" << endl;
	}

}


//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string str1;
//	string str2;
//	while (getline(cin, str1))
//	{
//		getline(cin, str2);
//		int count = 0;
//		for (int i = 0; i<str1.size(); i++)
//		{
//			string str3;
//			for (int j = i; j<i + str2.size(); j++)
//			{
//				str3.push_back(str1[j]);
//			}
//			if (str3 == str2)
//				count++;
//		}
//		cout << count << endl;
//	}
//}