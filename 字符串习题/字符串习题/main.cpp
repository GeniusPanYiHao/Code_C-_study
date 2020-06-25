#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	string str;
//	getline(cin,str);
//	reverse(str.begin(), str.end());
//	cout << str << endl;
//}
//
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str1;
//	getline(cin, str1);
//	string str2;
//	getline(cin, str2);
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int sum = 0;
//	if (str1.size() > str2.size())
//	{
//		for (i; i<str1.size(); i++)
//		{
//			if (str1[i] == str2[j])
//			{
//				j++;
//				count++;
//			}
//			if (count>sum)
//			{
//				sum = count;
//			}
//		}
//	}
//	else
//	{
//		i = 0;
//		for (int j=0; j<str2.size(); j++)
//		{
//			if (str1[i] == str2[j])
//			{
//				i++;
//				count++;
//			}
//			if (count>sum)
//			{
//				sum = count;
//			}
//		}
//	}
//	cout << sum << endl;
//}


//:动态规划求解最长公共字符串
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	int sum = 0;
	while (cin >> str1 >> str2)
	{
		sum = 0;
		vector<vector<int>> DP(str1.size(), vector<int>(str2.size(), 0));
		for (int i = 0; i < str1.size(); i++)
		{
			for (int j = 0; j < str2.size(); j++)
			{
				if (str1[i] == str2[j])
				{
					if (i >= 1 && j >= 1)
					{
						DP[i][j] = DP[i - 1][j - 1] + 1;
					}
					else
						DP[i][j] = 1;
				}
				if (DP[i][j] > sum)
				{
					sum = DP[i][j];
				}
			}
		}
		cout << sum << endl;
	}
}

