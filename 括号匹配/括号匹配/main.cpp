#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool chkParenthesis(string str, int n) {
	std::stack<char> a;
	for (int i = 0; i<n; i++)
	{
		if (str[i] == '(')//遍历字符串，当遇到（时将其压入站中
		{
			a.push(str[i]);
		}
		if (str[i] == ')')//：当遇到）时，此时判断栈是否为空，若不为空且栈顶元素为（，则移除栈顶元素。反之，直接返回false
		{
			if (!a.empty() && a.top() == '(')
			{
				a.pop();
			}
			else
				return false;
		}
	}
	if (a.empty())//:最后如果栈为空，则返回true。反之则返回false；
		return true;
	else
		return false;
}
	int main()
	{
		string str;
		cin >> str;
		int n = str.size();
		cout << chkParenthesis(str, n) << endl;
	}