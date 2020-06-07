#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//bool isHuiwen(string str)
//{
//	string str1 = str;
//	reverse(str.begin(), str.end());
//	if (str1 == str)
//		return true;
//	else
//		return false;
//}
//int Insert(string str2, string str3)
//{
//	string str4;
//	int count = 0;
//	for (int i = 0; i<str2.size(); i++)
//	{
//		str4 = str2;
//		str4.insert(i, str3);
//		if (isHuiwen(str4))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	string str1;
//	string str2;
//	getline(cin, str1);
//	getline(cin, str2);
//	cout << Insert(str1, str2) << endl;
//}
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int s;
	cin >> s;
	int b = 0;
	vector<int> a(s);
	while (b<s)
	{
		cin >> a[b];
		b++;
	}
	vector<int> dp(s);
	dp[0] = a[0];
	int res = dp[0];
	for (int i = 1; i<s; i++)
	{
		dp[i] = a[i] + (dp[i - 1]>0 ? dp[i - 1] : 0);
		if (res<dp[i])
		{
			res = dp[i];
		}

	}
	cout << res << endl;
}