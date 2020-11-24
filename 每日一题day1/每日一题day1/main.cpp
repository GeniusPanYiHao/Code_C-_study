#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str1;
//	getline(cin, str1);
//	string str2;
//	getline(cin, str2);
//	string str3;
//	for (int i = 0; i<str1.size(); i++)
//	{
//		int flag = 0;
//		for (int j = 0; j<str2.size(); j++)
//		{
//			if (str1[i] == str2[j])
//			{
//				flag++;
//			}
//		}
//		if (flag == 0)
//		{
//			str3.push_back(str1[i]);
//		}
//	}
//	cout << str3;
//}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> arr(3 * n);
	for (int i = 0; i<3 * n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	int count = 0;
	int j = 3 * n - 2;
	while (n--)
	{
		count += arr[j];
		j = j - 2;
	}
	cout << count << endl;
}