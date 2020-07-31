#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
	vector<string> Permutation(string str) {
		vector<string> str1;
		if (str.empty())
			return str1;
		permutaion(str, str1, 0);
		sort(str1.begin(), str1.end());
		return str1;
	}
	void permutaion(string str, vector<string> &str1, int n)
	{
		if (n == str.size() - 1)
		{
			str1.push_back(str);
		}
		else
		{
			permutaion(str, str1, n + 1);
			for (int i = n + 1; i<str.size(); i++)
			{
				if (str[n] != str[i])
				{
					swap(str[i], str[n]);
					permutaion(str, str1, n + 1);
					swap(str[i], str[n]);
				}
			}

		}
	}
};
int main()
{
	string str;
	cin >> str;
	Solution s;
	s.Permutation(str);
}
