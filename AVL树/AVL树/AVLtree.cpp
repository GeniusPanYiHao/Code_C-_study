#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<assert.h>
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
		, right(nullptr)
		, parent(nullptr)
		, value(value)
		, bf(0)
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
			if (gParent->left == _parent)
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
	bool insert(const T& _value)
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
			_parent->left = cur;
		else
			_parent->right = cur;

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
					pNode subL = _parent->left;
					pNode subLR = subL->right;
					int bf = subLR->bf;
					LotateL(cur);
					RotateR(_parent);
					//:更新parent,subL的平衡因子
					if (bf == 1)
					{
						_parent->bf = 0;
						subL->bf = -1;
					}
					else if (bf == -1)
					{
						subL->bf = 0;
						_parent->bf = 1;
					}
				}
				else if (_parent->bf == 2 && cur->bf == -1)
				{
					pNode subR = _parent->right;
					pNode subRL = subR->left;
					int bf = subRL->bf;

					RotateR(cur);
					LotateL(_parent);
					if (bf == 1)
					{
						subR->bf = 0;
						_parent->bf = -1;
					}
					else if (bf == -1)
					{
						_parent->bf = 0;
						subR->bf = -1;
					}
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
	void _show()
	{
		show(root);
		cout << endl;
	}
	void show(pNode root)
	{
		if (root)
		{
			show(root->left);
			cout << root->value << " ";
			show(root->right);
		}
	}
	int hight(pNode root)
	{
		if (root != nullptr)
		{
			int left = hight(root->left);
			int right = hight(root->right);
			return left > right ? left + 1 : right + 1;
		}
		return 0;
	}
	bool isAVLTree()
	{
		return _isAVLTree(root);
	}
	bool _isAVLTree(pNode _root)
	{
		if (_root == nullptr)
			return true;
		int left = hight(_root->left);
		int right = hight(_root->right);
		if (right - left != _root->bf)
		{
			cout << "节点" << root->value << "平衡因子异常" << endl;
			return false;
		}
		return abs(_root->bf) < 2 && _isAVLTree(_root->left) && _isAVLTree(_root->right);
	}
private:
	pNode root = nullptr;
};

void test()
{
	AVLTree<int>* avl = new AVLTree<int>();
	int arr[] = { 4,2,6,1,3,5,15,7,16,14 };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		avl->insert(arr[i]);
	}
	avl->_show();
	cout << avl->isAVLTree() << endl;
}
int main()
{
	test();
	return 0;
}