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
	LNode *head, *node, *tail;//����ͷ�ڵ㣬��ͨ�ڵ㣬β���ڵ㣻
	head = (LNode*)malloc(sizeof(LNode));//���ٷ����ַ
	head->next = NULL;
	tail = head;         //�����ǿ�������ͷ�ڵ�==β�ڵ�
	for (int i = 0; i <n; i++) {
		node = (LNode*)malloc(sizeof(LNode));
		scanf("%d", &node->data);
		node->next = NULL;
		tail->next = node;
		tail = node;
	}
	tail->next = NULL;//��������
	return head;
}
void Insert(LNode *head, int i, int X)//:�ڵ�i��Ԫ��ǰ����X
{
	LNode *s;
	if (i == 1)//:����headǰ����
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
void show(LNode *head)//��������
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
