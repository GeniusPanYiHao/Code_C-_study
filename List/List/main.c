#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<assert.h>
typedef struct Node
{
	int data;
	struct Node *next;
}LNode;
LNode *creat(int n){
	LNode *head, *node, *tail;//定义头节点，普通节点，尾部节点；
	head = (LNode*)malloc(sizeof(LNode));//开辟分配地址
	head->next = NULL;
	tail = head;         //若果是空链表则头节点==尾节点
	for (int i = 0; i <n; i++) {
		node = (LNode*)malloc(sizeof(LNode));
		scanf("%d", &node->data);
		node->next = NULL;
		tail->next = node;
		tail = node;
	}
	tail->next = NULL;//结束创建
	return head;
}
void Insert(LNode *head, int i, int X)//:在第i个元素前插入X
{
	LNode *s;
	if (i == 1)//:若在head前插入
	{
		s = (LNode*)malloc(sizeof(LNode));
		s->data = X;
		s->next = head;
		return s;
	}
	LNode *p = head;
	int a = 1;
	while (p != NULL&&a < i)
	{
		p = p->next;
		a++;
	}
	s = (LNode*)malloc(sizeof(LNode));
	s->data = X;
	s->next = p->next;
	p->next = s;
	return head;
}
void ReverseOrderList(LNode *head)
{

}
void show(LNode *head)//链表的输出
{
	LNode *h;
	h = head->next;
	while (h != NULL)
	{
		if (h->next == NULL)
			printf("%d", h->data);
		else
			printf("%d", h->data);
		h = h->next;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	LNode *head;
	head = creat(n);
	show(head);
	return 0;
}
