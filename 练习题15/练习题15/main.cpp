#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[100] = { 0 };
//	int i = 0;
//	int sum = 0;
//	while (i<n)
//	{
//		i++;
//
//		for (int c = 0; c<3; c++)
//		{
//			scanf("%d", &a[c]);
//		}
//
//		for (int c = 0; c<3; c++)
//		{
//			for (int d = c + 1; d<3; d++)
//			{
//				if (a[d]<a[c])
//				{
//					int s = a[d];
//					a[d] = a[c];
//					a[c] = s;
//				}
//			}
//		}
//		sum += a[1];
//
//	}
//	cout << sum << endl;
//
//}


//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n;
//	long long sum = 0;
//	while (cin >> n)
//	{
//		vector<int>a(3 * n);
//		for (int c = 0; c<3 * n; c++)
//		{
//			scanf("%d", &a[c]);
//		}
//		sort(a.begin(), a.end());
//		for (int i = n; i<3 * n - 1; i = i + 2)
//		{
//			sum += a[i];
//		}
//	}
//	cout << sum << endl;
//
//}


#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1;
	string str2;
	string str3;
	cin >> str1;
	cin >> str2;
	int i = 0;
	while (str2[i] != NULL)
	{
		int a = 0;
		int i = 0;
		while (a<str1.size())
		{
			if (str1[a] != str2[i])
			{
				str3[i++] = str1[a];
			}
			a++;
		}
	}
	cout << str3 << endl;
}