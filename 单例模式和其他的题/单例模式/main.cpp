#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<mutex>
//#include<thread>
//#include<vector>
//using namespace std;
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	
	while (cin >> n)
	{vector<int> arr(n);
		for (int i = 0; i< n; i++)
		{
			cin >> arr[i];
		}
		int a = 0;
		int b = 0;
		int c = 0;
		for (int i = 0; i<arr.size()-1; i++)
		{
			if (arr[i]>arr[i + 1])
			{
				a = i;
				break;
			}

		}
		for (int i = a; i<arr.size(); i++)
		{
			if (arr[i]>arr[a])
			{
				b = i-1;
				break;
			}
		}
		while (a < b)
		{
			int d = arr[a];
			arr[a] = arr[b];
			arr[b] = d;
			a++;
			b--;
		}
		int flag = 0;
		for (int i = 0; i<arr.size()-1; i++)
		{
			if (arr[i]>arr[i + 1])
				flag++;
		}
		if (flag == 0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}
////class Singleton
////{
////public:
////	static Singleton* Getinstance()
////	{
////		return &m_instance;
////	}
////private:
////	Singleton(){};
////	Singleton(Singleton const&);
////	Singleton& operator=(Singleton const&);
////
////	static Singleton m_instance;
////};
////Singleton  Singleton::m_instance;
//
//bool Location(int N,vector<int> Location)
//{
//	int flag = 0;
//	vector<int> Location;
//	for (int i = 0; i < N-1; i++)
//	{
//		for (int j = i + 1; j < N; j++)
//		{
//			if (Location[i] == Location[j])
//			{
//				flag++;
//			}
//		}
//	}
//	if (flag == 0)
//	{
//		return true;
//	}
//	else
//		return false;
//}
//
//
//string cut(string ASrcStr, char Delimiter,int AIndex)
//{
//	int a = 0;
//	int b = 0;
//	for (int i = 0; i < ASrcStr.size(); i++)
//	{
//		if (ASrcStr[i] == Delimiter)
//		{
//			a++;
//			if (a == AIndex)
//			{
//				b = i;
//			}
//		}
//	}
//	string str1;
//	for (int i = b; i < ASrcStr.size(); i++)
//	{
//		str1.push_back(ASrcStr[i]);
//	}
//	return str1;
//}
//
//int main()
//{
//
//}