//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//	int a[5] = { 0 };
//	int sum = 0;
//	for (int i = 0; i<4; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i<4; i++)
//	{
//		sum -= a[i];
//	}
//	int B = sum / (-4);
//	int A = a[0] + B;
//	int C = B-a[1];
//
//
//		cout << A << " " << B << " " << C << endl;
//}
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string str1;
	string str2("0123456789ABCDEF");
	int M, N;
	cin >> M >> N;
	int a = 1;
	if (M<0)
	{
		a = -1;
		M = -M;
	}
	while (M)
	{
		str1 += str2[M%N];
		M = M / N;
	}
	if (a == -1)
	{
		str1 += '-';
	}
	reverse(str1.begin(), str1.end());
	cout << str1 << endl;
}