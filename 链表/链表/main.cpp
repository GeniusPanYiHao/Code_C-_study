#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
typedef struct List
{
	int val;
	List *next;
}LNode;
LNode* creat(int n)
{
	LNode *head,*node,*tail;
	head = (LNode*)malloc(sizeof(LNode));
	head->next = NULL;
	tail = head;
	for (int i = 0; i < n; i++)
	{
		node = (LNode*)malloc(sizeof(LNode));
		cin >> node->val;
		node->next = NULL;
		tail->next = node;
		tail = node;
	}
	tail->next = NULL;
	return head;
}
LNode* insert(LNode* head,int n,int VAL)
{
	LNode* h = NULL;
	LNode* s;
	h = head;

	if (n == 1)
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->next = head;
		s->val = VAL;
	}
	int a = 1;
	while (a<n)
	{
		h = h->next;
		a++;
	}
	s = (LNode*)malloc(sizeof(LNode));
	s->next = h->next;
	h->next = s;
	s->val = VAL;
	return head;
}
void show(LNode* head)
{
	LNode* h;
	h = head->next;
	while (h)
	{
		cout << h->val;
		h = h->next;
	}
}
int main()
{
	int n;
	cin >> n;
	LNode *head;
	head = creat(n);
	insert(head, 1, 2);
	show(head);
}