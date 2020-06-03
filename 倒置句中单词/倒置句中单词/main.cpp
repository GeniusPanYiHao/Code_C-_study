#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stack>
#include<string>
#include<sstream>
using namespace std;

int main(){
	stack<string> sstack;
	string line, word;
	getline(cin, line);
	istringstream stream(line);
	while (stream >> word) {
		sstack.push(word);
	}
	while (!sstack.empty()) {
		cout << sstack.top() << " ";
		sstack.pop();
	}
	return 0;
}

#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main()
{
	string str1;
	string str2;
	queue<char> q;
	int i = 0;
	getline(cin, str1);
	int len = str1.size();
	for (int i = str1.size(); i>=0; i--)
	{
		if (str1[i] == ' '||i==0)
		{
			int pos = i;
			for (int a = pos ; a<len; a++)
			{
				q.push(str1[a]);
			}
			len = pos + 1;
		}
	}
	q.pop();
	int f = 0;
	while (!q.empty())
	{
		/*str2= q.front();*/
		cout<<q.front()<<endl;
		q.pop();
		f++;
	}
	//cout << str2 << endl;
	return 0;
}