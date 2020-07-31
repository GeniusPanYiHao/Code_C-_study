#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void input(int n, vector<int> a)
{
	int min = a[0];
	for (int i = 1; i<a.size()-1; i++)
	{
		if (a[i]<a[i + 1])
		{
			if (a[i]<min)
			{
				min = a[i];
			}
		}
	}
	for (int i = 0; i<n-1; i++)
	{
		if (a[i] == min)
		{
			if (a[i] == a[i+1])
			{
				int c = i;
				a[i + 1] = 2 * a[i + 1];
				a.erase(a.begin()+c);
				break;
			}
		}
	}
	int flag = 0;
	for (int i = 0; i < a.size()-1; i++)
	{
		for (int j = i + 1; j < a.size(); j++)
		{
			if (a[i] == a[j])
			{
				flag++;
			}
		}
	}
	if (flag != 0)
	{
		input(a.size(), a);
	}
	else
	{
		for (int i = 0; i < a.size(); i++)
		{
			cout << a[i] << endl;
		}
	}

}
int main()
{
	int n;
	while (cin >> n)
	{
		vector<int> a(n);
		for (int i = 0; i<n; i++)
		{
			cin >> a[i];
		}
		input(n, a);
	}
}
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n;
//		float m, x;
//	while (cin >> n >> m >> x)
//	{
//		vector<float> a(n);
//		for (int i = 0; i<n; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 0; i < a.size() - 1; i++)
//		{
//			if (a[i]>a[i + 1])
//			{
//				float d = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = d;
//			}
//		}
//		float e = a[0] + x;
//		m--;
//		while (m--)
//		{
//			int flag = 0;
//			for (int i = 1; i < a.size(); i++)
//			{
//				if (e > a[i])
//				{
//					flag++;
//					a[i] = a[i] + 1;
//					m--;
//				}
//			}
//			if (flag == 0)
//			{
//				e = e + x;
//			}
//			else
//				break;
//		}
//		cout << e << endl;
//	}
//}
//int input(int n, int m, int x)
//{
//	int n, m, x;
//	while (cin >> n >> m >> x)
//	{
//		vector<int> a(n);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 0; i < a.size() - 1; i++)
//		{
//			if (a[i]>a[i + 1])
//			{
//				int d = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = d;
//			}
//		}
//		int d = a[0] + x;
//		m--;
//		for (int i = 1; i < a.size(); i++)
//		{
//			if (d <= a[i] && m != 0)
//			{
//				input(n,m,x);
//			}
//			else
//				break;
//		}
//		return d;
//	}
//}
//int main()
//{
//	int n, m, x;
//	/*while(cin >> n >> m >> x)
//	{
//		vector<int> a(n);
//		for (int i = 0; i<n; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 0; i < a.size() - 1; i++)
//		{
//				if (a[i]>a[i+1])
//				{
//					int d = a[i];
//					a[i] = a[i+1];
//					a[i+1] = d;
//				}
//		}
//		int d = a[0] + x;
//		m--;*/
//		for (int i = 1; i < a.size(); i++)
//		{
//			if (d <= a[i]&&m!=0)
//			{
//
//			}
//		}
//}



//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//	int n, m, x;
//	while (cin >> n >> m >> x)
//	{
//		vector<long long> a(n);
//		for (int i = 0; i<n; i++)
//		{
//			cin >> a[i];
//		}
//		for (int i = 0; i < a.size() - 1; i++)
//		{
//			if (a[i]>a[i + 1])
//			{
//				long long d = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = d;
//			}
//		}
//		long long e = a[0] + m*x;
//		cout << e << endl;
//	}
//}