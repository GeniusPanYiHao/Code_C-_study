#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	/*double a = 13.14;
	int b = static_cast<int>(a);
	cout << b << endl;
	return 0;*/
	const int a = 2;
	int *p = const_cast<int*>(&a);
	*p = 3;
	cout << a << endl;
}