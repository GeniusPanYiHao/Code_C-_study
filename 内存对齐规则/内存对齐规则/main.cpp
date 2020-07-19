#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//8
struct A
{
public:
	int a;
	char b;
	short c;
};
//12
struct B
{
public:
	char b;
	int a;
	short c;
};
//8
struct C
{
public:
	short c;
	char b;
	int a;
};
//24
struct D
{
public:
	short c;
	char b;
	double d;
	int a;
};
struct E
{
public:
	char b;
	struct D;
	int a;
};
int main()
{
	cout << sizeof(A) << endl;
	cout << sizeof(B)<< endl;
	cout << sizeof(C) << endl;
	cout << sizeof(D) << endl;
	cout << sizeof(E) << endl;
}