#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<map>
using namespace std;
//class Solution {
//public:
//	/**
//	*
//	* @param intervals int整型vector<vector<>>
//	* @return int整型
//	*/
//	int eraseOverlapIntervals(vector<vector<int> >& intervals) {
//		// write code here
//		multimap<int, int> less;
//		for (int i = 0; i<intervals.size(); i++)
//		{
//			less.insert(pair<int, int>(intervals[i][0], intervals[i][1]));
//		}
//		multimap<int, int>::iterator iter;
//		int sum = -1;
//		int count = -1;
//		for (iter = less.begin(); iter != less.end(); iter++)
//		{
//			if (sum == iter->first)
//			{
//				count++;
//			}
//			sum = iter->first;
//		}
//		return count;
//	}
//};
int sum = 0;
int Delete(string str1)
{
	string str2 = "Good";
	int left1 = 0;
	int left2 = 0;
	int count = 0;
	while (left1 < str1.size())
	{
		if (str1[left1] == str2[left2])
		{
			str1.erase(str1.begin() + left1);
			left2++;
		}
		else
			left1++;
		if (left2 == 4)
		{
			left2 = 0;
			count++;
		}
	}
	int max = 0;
	while (left1 < str1.size())
	{
		if (str1[left1] == str2[left2])
		{
			left1++;
			left2++;
		}
		else
			left1++;
		if (left2 == 4)
		{
			left2 = 0;
			max++;
		}
	}
	sum += count;
	if (str1.size() >= 4&&max!=0)
	{
		Delete(str1);
	}
	return sum;
}
int main()
{
	string str1;
	getline(cin, str1);
	cout << Delete(str1) << endl;
}

//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str1;
//	string str2 = "Good";
//	getline(cin, str1);
//	int left1 = 0;
//	int left2 = 0;
//	int count = 0;
//	while (left1<str1.size())
//	{
//		if (str1[left1] == str2[left2])
//		{
//			str1.erase(str1.begin() + left1);
//			left2++;
//		}
//		else
//		{
//			left1++;
//		}
//		if (left2 == 4)
//		{
//			left2 = 0;
//			count++;
//		}
//	}
//	if (str1.size()<5)
//		cout << count << endl;
//}