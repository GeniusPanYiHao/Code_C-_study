#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	//int i;
	//int &ri = i;//:ri指向i;二者绑定在一起  ri相当于i的另外一个名字
	//i = 5;
	//ri = 10;//:相当于把10赋给了i
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