#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
template<class T>
struct BsNode
{
	BsNode<T> *left;
	BsNode<T> *right;
	T value;

	BsNode(const T &value = T())
		:left(nullptr)
		, right(nullptr)
		,value(value)
	{}
};
template <class T>
class BsTree
{
public:
	typedef BsNode<T> Node;
	typedef Node *pNode;
	pNode find(const T &value)
	{
		pNode cur = root;
		while (cur)
		{
			if (cur->value == value)
			{
				return cur;
			}
			else if (cur->value > value)
			{
				cur = cur->left;
			}
			else
			{
				cur = cur->right;
			}

		}
		return cur;
	}
	bool insert(const T &value)
	{
		if (root == nullptr)
		{
			root = new Node(value);
			return true;
		}
		//:先搜索
		pNode cur = root;
		pNode parent = nullptr;
		while (cur)
		{
			parent = cur;
			if (cur->value == value)
			{
				return false;
			}
			else if (cur->value > value)
			{
				cur = cur->left;
			}
			else
			{
				cur = cur->right;
			}
		}
		cur = new Node(value);
		//:判断节点位置
		if (parent->value > value)
		{
			parent->left = cur;
		}
		else
		{
			parent->right = cur;
		}
		return true;
	}
	bool erase(const T &value)
	{
		if (root == nullptr)
		{
			return false;
		}
		pNode cur = root;
		pNode parent = nullptr;
		while (cur)
		{
			if (cur->value == value)
				break;
			else if (cur->value > value)
			{
				parent = cur;
				cur = cur->left;
			}
			else
			{
				parent = cur;
				cur = cur->right;
			}
		}
		//:判断节点是否存在
		if (cur == nullptr)
			return false;
		//:此节点没有左孩子
		if (cur->left == nullptr)//:1.cur为叶子节点，2.只有右子数的非叶子节点
		{
			//:根和其他节点
			if (cur != root)
			{
				//：更新父节点和孩子的链接
				if (parent->left == cur)
					parent->left = cur->right;
				else
					parent->right = cur->right;
			}
			//:更新根节点
			else
				root = cur->right;
			delete cur;
			cur = nullptr;
		}
		else if (cur->right == nullptr)
		{
			if (cur != root)
			{
				if (parent->left == cur)
				{
					parent->left = cur->left;
				}
				else
					parent->right = cur->left;
			}
			else
				root = cur->left;
			delete cur;
			cur = nullptr;
		}
		else
		{
			pNode next = cur->left;
			pNode parent = cur;
			while (next->right)
			{
				parent = next;
				next = next->right;
			}
			cur->value = next->value;
			if (parent->left == next)
				parent->left = next->left;
			else
				parent->right = next->left;
			delete next;
			next = nullptr;
		}
		return true;
	}
	void InOrder(pNode root)
	{
		if (root)
		{
			InOrder(root->left);
			cout << root->value<<" " ;
			InOrder(root->right);
		}
	}
	void Test1()
	{
		InOrder(root);
		cout <<"  "<<endl;
	}
private:
	pNode root = nullptr;

};
void Test()
{
	BsTree<int> bs;
	cout << bs.insert(5) << endl;
	cout << bs.insert(3) << endl;
	cout << bs.insert(1) << endl;
	cout << bs.insert(0) << endl;
	cout << bs.insert(2) << endl;
	cout << bs.insert(7) << endl;
	cout << bs.insert(6) << endl;
	cout << bs.insert(8) << endl;
	cout << bs.insert(9) << endl;
	bs.Test1();
	bs.erase(0);
	bs.Test1();
	bs.erase(5);
	bs.Test1();
	bs.erase(9);
	bs.Test1();
}
int main()
{
	Test();
	return 0;
}