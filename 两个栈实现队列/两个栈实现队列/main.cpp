#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution
{
public:
	void push(int node) {
		stack1.push(node);

	}

	int pop() {
		int res;
		if (stack2.size() > 0) {
			res = stack2.top();
			stack2.pop();
		}
		else if (stack1.size() > 0) {
			while (stack1.size() > 0) {
				int ele = stack1.top();
				stack1.pop();
				stack2.push(ele);
			}
			res = stack2.top();
			stack2.pop();
		}
		return res;
	}

private:
	stack<int> stack1;
	stack<int> stack2;
};