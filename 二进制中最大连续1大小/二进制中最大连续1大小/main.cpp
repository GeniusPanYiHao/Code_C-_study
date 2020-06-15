#include<iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int count = 0;
		int sum = 0;
		while (n)
		{
			if (n & 1)
			{
				count++;
				if (count > sum)
				{
					sum = count;
				}

			}
			else
				count = 0;
			n >>= 1;
		}
		cout << sum << endl;
	}
}