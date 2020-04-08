#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
template<class T>
struct AVLNode
{
	AVLNode<T> *left;
	AVLNode<T> *right;
	AVLNode<T> *parent;
	T value;
	int bf;

	AVLNode(const T &value = T())
		:left(nullptr)
		; right(nullptr)
		; parent(nullptr)
		; value(value)
		; bf(0);
	{

	}
};
template<class T>
class AVLTree
{
public:
	typedef AVLNode<T> Node;
	typedef Node *pNode;
	void RotateR(pNode _parent)
	{
		pNode subL = _parent->left;
		pNode subLR = subL->right;

		subL->right = _parent;
		_parent->left = subLR;
		if (subLR)
		subLR->parent = _parent;

		if (_parent != root)
		{
			pNode gParent = _parent->parent;
			if (gParent->left = _parent)
				gParent->left = subL;
			else
				gParent->right = subL;
			subL->parent = gParent;
		}
		else
		{
			//：更新根节点
			root = subL;
			subL->parent = nullptr;
		}
		_parent->parent = subL;

		//:更新平衡因子
		subL->bf = _parent->bf = 0;
	}
private:
	pNode root = nullptr;
};