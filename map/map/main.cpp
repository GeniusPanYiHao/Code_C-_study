#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
	void repeatedNTimes(vector<int>& A) {
		size_t N = A.size() / 2;
		unordered_map<int, int> map;
		for (auto e : A)
		{
			map[e]++;
		}
		for (auto& e : map)
		{
			if (e.second == N)
				cout<<e.first;
		}
	}
};
int main()
{
	Solution S;
	vector<int> arr;
	arr = { 1, 2, 3, 4, 5, 6, 1, 1, 1, 1 };
	S.repeatedNTimes(arr);
}