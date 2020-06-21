#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//bool AllCount(int n)
//{
//	int sum = 0;
//	for (int i = 1; i<n; i++)
//	{
//		if (n%i == 0)
//		{
//			sum += i;
//		}
//	}
//	if (sum == n)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (AllCount(i))
//			count++;
//	}
//	cout << count << endl;
//}

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string str1;
	vector<int> a;
	vector<int> b;
	while (getline(cin, str1))
	{
		int k = str1.find('-');
		string str2 = str1.substr(0, k);
		string str3 = str1.substr(k + 1);
		if (str2 == "joker JOKER" || str3 == "joker JOKER")
		{
			cout << "joker JOKER" << endl;
		}

		else
		{
			for (int i = 0; i < str2.size(); i++)
			{
				if (str2[i] == '1')
				{
					a.push_back(10);
					i++;
				}
				else if (str2[i] == 'j')
				{
					a.push_back(16);
					i += 5;
				}
				else if (str2[i] == 'A')
					a.push_back(15);
				else if (str2[i] == 2)
					a.push_back(14);
				else if (str2[i] == 'J'&&str2[i + 1] != 'O')
					a.push_back(11);
				else if (str2[i] == 'J'&&str2[i + 1] == 'O')
				{
					a.push_back(17);
					i += 4;
				}
				else if (str2[i] == 'Q')
					a.push_back(12);
				else if (str2[i] == 'k')
					a.push_back(13);
				else if (str2[i] == ' ')
					continue;
				else
					a.push_back(str2[i] - '0');
			}
			for (int i = 0; i < str3.size(); i++)
			{
				if (str3[i] == '1')
				{
					b.push_back(10);
					i++;
				}
				else if (str3[i] == 'j')
				{
					b.push_back(16);
					i++;
				}
				else if (str3[i] == 'A')
					b.push_back(15);
				else if (str3[i] == 2)
					b.push_back(14);
				else if (str3[i] == 'J'&&str3[i + 1] != 'O')
					b.push_back(11);
				else if (str3[i] == 'J'&&str3[i + 1] == 'O')
				{
					b.push_back(17);
					i += 4;
				}
				else if (str3[i] == 'Q')
					b.push_back(12);
				else if (str3[i] == 'k')
					b.push_back(13);
				else if (str3[i] == ' ')
					continue;
				else
					b.push_back(str3[i] - '0');
			}
			if (a.size() == b.size())
			{
				if (a[0] > b[0])
				{
					cout << str2 << endl;
				}
				else
					cout << str3 << endl;
			}
			else if (a.size() == 4 || b.size() == 4)
			{
				if (a.size() == 4)
					cout << str2 << endl;
				else
					cout << str3 << endl;
			}
			else
			{
				cout << "ERROR" << endl;
			}
		}
	}
}