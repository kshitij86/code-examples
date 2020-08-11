#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> veci;
typedef vector<string> vecs;
typedef vector<long> vecl;
typedef vector<vector<int>> vecvi;
typedef vector<vector<string>> vecvs;
#define REP(i, a, b) for (i = a; i < b; i++)
#define rep(i, n) REP(i, 0, n)

void print_arr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void print_vector(veci arr)
{
	for (int i : arr)
	{
		cout << i << " ";
	}
	cout << endl;
}

void print_vectorv(vecvi arr)
{
	for (veci i : arr)
	{
		print_vector(i);
	}
	cout << endl;
}

struct Node {
	int data;
	Node *next;

	Node(int data) {
		this->data = data;
		this->next = NULL;
	}
};

void print_list(Node *root) {
	Node *temp = root;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

// b->c->d

// Data in the node is irrelevant
void del_nHead(Node *nHead) {
	Node *temp = nHead->next;

	nHead->data = nHead->next->data;
	nHead->next = nHead->next->next;

	free(temp);
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int test;

	Node *root = new Node(1);
	root->next = new Node(3);
	root->next->next = new Node(4);
	root->next->next->next = new Node(5);

	// Points to *not* the head
	Node *nHead = root->next;

	print_list(root);

	del_nHead(nHead);

	print_list(root);
}
