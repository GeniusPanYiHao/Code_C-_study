//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int m;
//	cin >> m;
//	long long c = n + m;
//	long long sum = 1;
//	long long count = 1;
//	for (int i = 1; i <= m; i++)
//	{
//		long long sum =sum*i;
//	}
//	while (m--)
//	{
//		long long count =count*c;
//		c--;
//	}
//	cout << count / sum << endl;
//}
#include<iostream>
using namespace std;
int n, m, dp[10005][10005];
int main()
{
	int n, m;
	cin >> n >> m;
		dp[0][0] = 0;
		for (int i = 1; i <= n; i++)
			dp[i][0] = 1;
		for (int j = 1; j <= m; j++)
			dp[0][j] = 1;
		for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
		{
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
		printf("%d\n", dp[n][m]);
	return 0;
}