#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int check_sys()
{
	int i = 1;

	return *(char*)&i;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
		cout << "С��" << endl;
	else
		cout << "���" << endl;
}