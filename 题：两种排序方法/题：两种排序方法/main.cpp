#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<string.h>
#include<vector>
using namespace std;
char a[101][100];
int n;
int fangfa2()
{
	int i;
	for (i = 0; i<n - 1; i++)
	if (strlen(a[i])>strlen(a[i + 1]))
		return 0;
	return 1;
}
int fangfa1()
{
	int i;
	for (i = 0; i<n - 1; i++)
	if (strcmp(a[i], a[i + 1])>0)
		return 0;
	return 1;
}
int main()
{
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
	}
	if (fangfa2() && fangfa1())
		cout << "both" << endl;
	if (fangfa1() && !fangfa2())
		cout << "lexicographically" << endl;
	if (!fangfa1() && fangfa2())
		cout << "lengths" << endl;
	if (!fangfa1() && !fangfa2())
		cout << "none" << endl;
}