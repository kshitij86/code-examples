#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<int> veci;
typedef vector<vector<int>> vecv;

void print_vector(veci v){
	for(int i: v){
		cout << i << " ";
	}
	cout << endl;
}

void print_vectorv(vecv v){
	for(veci i: v){
		print_vector(i);
	}
}

struct Node{
	int data;
	Node *left, *right; 


	Node(int data){
		this->data = data;
		this->left = this->right = NULL;
	}
};

Node* bstInsert(Node *root, int data){
	if(root == NULL){
		root = new Node(data);
		cout << data << " entered\n";
		return root;
	}

	if(root->data < data){
		root->left = bstInsert(root->left, data);
	}

	if(root->data > data){
		root->right = bstInsert(root->right, data);
	}
}

void printTree(Node *root){
	if(root != NULL){
		cout << root->data << " ";
	}

	if(root->left) printTree(root->left);
	if(root->right) printTree(root->right);
	cout << endl;
}

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	Node *root = new Node(1);
	printTree(root);
	bstInsert(root, 2);
	printTree(root);
}