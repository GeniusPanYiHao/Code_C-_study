#define _CRT_SECURE_NO_WARNINGS 1
enum Color
{
	black,
	red
};
template<class K,class V>
struct RBNode
{
	RBNode<K, V> *left;
	RBNode<K, V> *right;
	RBNode<K, V> *parent;
	pair<K, V> value;
	Color color;

	RBNode(const pair<K, V> &_value)
	{
		:left(nullptr)
		, right(nullptr)
		,parent(nullptr)
		, color(red)
		{

		}
	}
};

template<class K,class V>
class RBTree
{
public:
	typedef RBNode<K, V> Node;
	typedef Node *pNode;

	RBTree()
	{
		header = new Node();
		header->left = header;
		header->right = header;
	}
	bool insert(const pair<K, V> &_value)
	{
		if (header->parent == nullptr)
		{
			pNode root = new Node(_value);
			root->color = black;
			root->parent = header;
			header->parent = root;
			header->left = root;
			header->right = root;
			return true;
		}
		pNode cur = header->parent;
		pNode _parent;
		while (cur)
		{
			_parent = cur;
			//:按照key值确定位置,key重复插入失败
			if (cur->value.first = _value.first)
				return false;
			else if (cur->value.first > _value.first)
				cur = cur->left;
			else
				cur = cur->right;
		}
		cur = new Node(_value);
	
	}
private:
	pNode header;
};
