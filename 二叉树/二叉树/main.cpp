#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
typedef struct BinaryTree
{
	BinaryTree* left;
	BinaryTree* right;
	int val;
}Tree;
void create(Tree** T)
{
	int data;
	cin >> data;
	if (data == 0)
	{
		*T = NULL;
	}
	else
	{
		*T = (Tree*)malloc(sizeof(Tree));
		if (!*T)
		{
			exit(1);
		}
		(*T)->val = data;
		create(&(*T)->left);
		create(&(*T)->right);
	}
}
void preBinTree(Tree *T)
{
	if (T == NULL)
		return;
	cout << T->val << endl;
	preBinTree(T->left);
	preBinTree(T->right);
}
void midBinTree(Tree *T)
{
	if (T == NULL)
		return;
	midBinTree(T->left);
	cout << T->val << endl;
	midBinTree(T->right);
}
void afterBinTree(Tree *T)
{
	if (T == NULL)
		return;
	afterBinTree(T->left);
	afterBinTree(T->right);
	cout << T->val << endl;
}
int main()
{
	Tree* T;
	create(&T);
	cout << "ǰ�������" << endl;
	preBinTree(T);
	cout << "���������" << endl;
	midBinTree(T);
	cout << "���������" << endl;
	afterBinTree(T);
}
