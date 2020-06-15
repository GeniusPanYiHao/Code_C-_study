#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
bool isSushu(int n)
{
	int i = 2;
	for (i; i<n; i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}
int main()
{
	int a;
	int b;
	int i;
	while (cin >> a)
	{
		b = a / 2;
		for (i = b; i<a; i++)
		{
			if (isSushu(i) && isSushu(a - i))
				break;
		}
		cout << i << endl << a - i << endl;
	}

}