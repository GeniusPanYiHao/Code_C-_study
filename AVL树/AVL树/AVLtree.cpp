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
	void LotateL(pNode _parent)
	{
		pNode subR = _parent->right;
		pNode subRL = subR->left;

		subR->left = _parent;
		_parent->right = subRL;
		if (subRL)
			subRL->parent = _parent;
		if (_parent != root)
		{
			pNode gParent = _parent->parent;
			if (gParent->left == _parent)
				gParent->left = subR;
			else
				gParent->right = subR;
			subR->parent = gParent;
		}
		else
		{
			root = subR;
			subR->parent = nullptr;
		}
		_parent->parent = subR;
		_parent->bf =subR->bf= 0;
	}
	void insert(const T& _value)
	{
		if (root == nullptr)
		{
			root = new Node(_value);
			return true;
		}
		pNode cur = root;
		pNode _parent = nullptr;
		while (cur)
		{
			_parent = cur;
			if (cur->value == _value)
				return false;
			else if (cur->value > _value)
				cur = cur->left;
			else
				cur = cur->right;

		}
		cur = new Node(_value);
		if (_parent->value > _value)
			parent->left = cur;
		else
			parent->right = cur;

		cur->parent = _parent;

		//:更新平衡因子
		while (_parent)
		{
			if (_parent->left == cur)
			{
				--_parent->bf;
			}
			else
				++_parent->bf;
			if (_parent->bf == 0)
				break;
			else if (abs(_parent->bf) == 1)
			{
				cur = _parent;
				_parent = _parent->parent;
			}
			else if (abs(_parent->bf) == 2)
			{
				//:旋转
				//:左旋
				if (_parent->bf == 2 && cur->bf == 1)
					LotateL(_parent);
				else if (_parent->bf == -2 && cur->bf == -1)
					RotateR(_parent);
				else if (_parent->bf == -2 && cur->bf == 1)
				{
					LotateL(cur);
					RotateR(_parent);
				}
				else if (_parent->bf == 2 && cur->bf == -1)
				{
					RotateR(cur);
					LotateL(_parent);
				}
				break;

			}
			else
			{
				assert(false);
			}
		}
		return true;
	}
private:
	pNode root = nullptr;
};