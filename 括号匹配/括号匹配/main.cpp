#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool chkParenthesis(string str, int n) {
	std::stack<char> a;
	for (int i = 0; i<n; i++)
	{
		if (str[i] == '(')//�����ַ�������������ʱ����ѹ��վ��
		{
			a.push(str[i]);
		}
		if (str[i] == ')')//����������ʱ����ʱ�ж�ջ�Ƿ�Ϊ�գ�����Ϊ����ջ��Ԫ��Ϊ�������Ƴ�ջ��Ԫ�ء���֮��ֱ�ӷ���false
		{
			if (!a.empty() && a.top() == '(')
			{
				a.pop();
			}
			else
				return false;
		}
	}
	if (a.empty())//:������ջΪ�գ��򷵻�true����֮�򷵻�false��
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