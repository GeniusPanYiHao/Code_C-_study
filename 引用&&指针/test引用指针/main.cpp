#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	//int i;
	//int &ri = i;//:riָ��i;���߰���һ��  ri�൱��i������һ������
	//i = 5;
	//ri = 10;//:�൱�ڰ�10������i
	//cout << i << " " << ri << endl;

	/*int val;
	int &ri = val;
	val = 5;
	ri = 10;
	int i = ri;
	int ii = val;
	cout << i <<ii<< endl;*/

	int value = 42;
	int *p = &value;
	*p = 0;
	cout << *p << " " << value << " "<<p<<endl;
}