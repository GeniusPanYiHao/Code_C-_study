#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
	/**
	* 判断给定的正整数最少能表示成多少个素数的和
	* @param N int整型 给定的正整数
	* @return int整型
	*/
	int MinPrimeSum(int N) {
		// write code here
		if (N % 2 == 0 && N != 2)
		{
			return 2;
		}
		if (N == 1)
		{
			return 0;
		}
		if (isSuShu(N) || N == 2)
		{
			return 1;
		}
		if (N % 2 != 0)
		{

			vector<int> arr;
			for (int i = 2; i<N - 1; i++)
			{
				int sum = i;
				int s = 0;
				int K = 1;
				int k = 1;
				if (isSuShu(i))
				{
					if (N%i == 0)
					{
						k = N / i;
						arr.push_back(k);
					}
					for (int b = i + 1; b < N; b++)
					{
						if (isSuShu(b))
						{
							s = i + b;
							if (s == N)
							{
								arr.push_back(2);
							}
						}

					}
					for (int j = i + 1; j<N; j++)
					{
						if (isSuShu(j))
						{
							sum = sum + j;
							k++;
							if (sum == N)
							{
								arr.push_back(k);
							}
						}
					}
				}
			}
			sort(arr.begin(), arr.end());
			return arr[0];
		}
	}
	bool isSuShu(int n)
	{
		int flag = 0;
		if (n == 2)
			return true;
		for (int i = 2; i<n; i++)
		{
			if (n%i == 0)
			{
				flag++;
			}
		}
		if (flag == 0)
			return true;
		else
			return false;
	}
};
int main()
{
	Solution s;
	int N;
	cin >> N;
	cout<<s.MinPrimeSum(N)<<endl;
}





//class Solution {
//public:
//	/**
//	*
//	* @param n int整型 只剩下一只蛋糕的时候是在第n天发生的．
//	* @return int整型
//	*/
//	int cakeNumber(int n) {
//		// write code here
//		if (n == 1)
//		{
//			return 1;
//		}
//		else
//		{
//			int x = 3;
//			n = n - 1;
//			while (n != 1)
//			{
//				n--;
//				x = ((x + 1) * 3) / 2;
//			}
//			return x;
//		}
//	}
//};
//int main()
//{
//	Solution s;
//	int n;
//	cin >> n;
//	cout << s.cakeNumber(n) << endl;
//}