#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
bool isSuShu(int n)
{
	int count = 0;
	for (int i = 2; i<n; i++)
	{
		if (n%i == 0)
		{
			count++;
		}
	}
	if (count == 0)
	{
		return true;
	}
	else
		return false;
}
int main()
{
	int n;
	cin >> n;
	int first = 0;
	int second = 0;
	int count = n / 2;
	int i = count;
	for (i = count; i>0; i--)
	{
		if (isSuShu(i) && isSuShu(n - i)&&n-i!=i)
		{
			break;
		}
	}
	cout << i << endl;
	cout << n - i << endl;
}



//#include<iostream>
//#include<vector>
//using namespace std;
//#include<iostream>
//using namespace std;
//bool isSuShu(int n)
//{
//	int count = 0;
//	for (int i = 2; i<n; i++)
//	{
//		if (n%i == 0)
//		{
//			count++;
//		}
//	}
//	if (count == 0)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int first = 0;
//	int second = 0;
//	int count = n / 2;
//	if (count % 2 == 0)
//	{
//		first = n / 2 - 1;
//		second = n / 2 + 1;
//	}
//	else
//	{
//		first = n / 2;
//		second = n / 2 + 1;
//	}
//	while (first!=0&&second<n)
//	{
//		if (isSuShu(first) && !isSuShu(second))
//		{
//			second++;
//		}
//		else if (!isSuShu(first) && isSuShu(second))
//		{
//			first--;
//		}
//		else
//		{
//			if (first + second == n)
//			{
//				cout << first << endl;
//				cout<< second << endl;
//				break;
//			}
//			if (first + second < n)
//			{
//				second++;
//			}
//			if (first + second > n)
//			{
//				first--;
//			}
//		}
//	}
//}




//class BinInsert {
//public:
//	int binInsert(int n, int m, int j, int i) {
//		m = m << j;
//		vector<int> arr;
//		int count = n;
//		while (count)
//		{
//			int a = count % 2;
//			arr.push_back(a);
//			count = count / 2;
//		}
//		for (int b = 0; b < arr.size(); b++)
//		{
//			if (b >= j&&b <= i)
//			{
//				arr[b] = 0;
//			}
//		}
//		int sum = 0;
//		for (int b = 0; b < arr.size(); b++)
//		{
//			if (arr[b] == 1)
//			{
//				sum = sum + pow(2, b);
//			}
//		}
//		sum = sum | m;
//		return sum;
//	}
//	};
//int main()
//{
//	BinInsert s;
//	cout<<s.binInsert(1024, 19, 2, 6);
//}