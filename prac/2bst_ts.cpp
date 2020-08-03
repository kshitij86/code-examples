// Given two BSTs and a target sum, find an element from each that add to give the number

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<int> veci;
typedef vector<vector<int>> vecv;

void print_vector(veci v)
{
	for (int i : v)
	{
		cout << i << " ";
	}
	cout << endl;
}

void print_vectorv(vecv v)
{
	for (veci i : v)
	{
		print_vector(i);
	}
}

struct BSTNode
{
	int data;
	BSTNode *left, *right;

	BSTNode();
	BSTNode(int data)
	{
		this->data = data;
		this->left = this->right = NULL;
	}
};

veci tree;
void giveArrayFromTree(BSTNode *root)
{
	if (!root)
		return;

	tree.pb(root->data);

	if (root->left)
		giveArrayFromTree(root->left);

	if (root->right)
		giveArrayFromTree(root->right);
}

bool treeHas(BSTNode *root, int val)
{
	// if (!root)
	// 	return false;

	// if (root->data == val)
	// {
	// 	cout << root->data << " ";
	// 	return true;
	// }
	// if (root->left)
	// 	return treeHas(root->left, val);

	// if (root->right)
	// 	return treeHas(root->right, val);

	// return false;

	// Correct searching
	if (!root)
		return false;

	if (root->data == val)
	{
		cout << root->data << " ";
		return true;
	}
	else if (root->data < val)
		return treeHas(root->right, val);
	else
		return treeHas(root->left, val);
}

bool doesTargetSumExist(BSTNode *root1, BSTNode *root2, int targetSum)
{
	giveArrayFromTree(root1);
	// print_vector(tree);

	for (int i = 0; i < tree.size(); i++)
	{
		if (tree[i] <= targetSum && treeHas(root2, targetSum - tree[i]))
		{
			cout << tree[i] << endl;
			return true;
		}
	}
	return false;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	BSTNode *root1 = new BSTNode(6);
	root1->left = new BSTNode(3);
	root1->left->left = new BSTNode(0);
	root1->left->right = new BSTNode(4);
	root1->right = new BSTNode(17);
	root1->right->left = new BSTNode(11);
	root1->right->right = new BSTNode(19);

	BSTNode *root2 = new BSTNode(8);
	root2->left = new BSTNode(5);
	root2->left->left = new BSTNode(1);
	root2->left->right = new BSTNode(7);
	root2->right = new BSTNode(13);

	cout << "The values are:\n";
	doesTargetSumExist(root1, root2, 30) ? cout << "YES\n" : cout << "NO\n";
}
