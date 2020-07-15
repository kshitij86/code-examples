#include<bits/stdc++.h>
using namespace std;

#define nl endl;
#define pb push_back
typedef vector<long> vecl;
typedef vector<int> veci;
typedef vector<char> vecc;
typedef vector<vector<int>> vecv;
 
void print_vec(veci x){
    for(int i: x)
        cout << i << " " ;
    cout << endl;

}

struct Node {
    int val;
    Node *left;
    Node *right;
    Node *next;
    Node(int data){
        this->val = data;
        this->left = this->right = this->next = NULL;
    } 
};

Node* next_ptr(Node *root){
    queue<Node*> q;
    q.push(root);
    int depth = 1;
    
    while(!q.empty()){
        int n = q.size();        

        while(n--){
            //cout << "n: " << n << endl;
            Node *temp = q.front();
            q.pop();
            cout << temp->val << " "; 
            if(n == 0){
                temp->next = NULL;
            } else {
                temp->next = q.front();
            }
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        cout << endl;
    }

    return root;
}

void trav(Node *root){
    if(!root)
        return;
 
    if(root->left) trav(root->left);
    
    if(root->next)
        cout << root->val << " : " << root->next << endl;
    else if(!root->next) 
        cout << root->val << " : " << "NULL" << endl;

    if(root->right) trav(root->right);
}

int main(){
    Node *root = new Node(1);    
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->left->left = new Node(4);
    root->right->right = new Node(7);

    next_ptr(root);
    trav(root);
}

