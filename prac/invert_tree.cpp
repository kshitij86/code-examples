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

struct Node
{
    int data;
    Node *left, *right;
    Node();

    Node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
};

Node *invert_tree(Node *root)
{
    if (root)
    {
        Node *temp = root->right;
        root->right = root->left;
        root->left = temp;
        invert_tree(root->left);
        invert_tree(root->right);
    }
}

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
}