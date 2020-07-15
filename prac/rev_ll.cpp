#include<bits/stdc++.h>
using namespace std;

#define nl endl;
#define pb push_back
typedef vector<long> vecl;
typedef vector<int> veci;
typedef vector<char> vecc;
typedef vector<vector<int>> vecv;

struct Node{
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
 
void print_vec(veci x){
    for(int i: x)
        cout << i << " " ;
    cout << endl;
}

void print_ll(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << nl;
}
   
void reverse_ll(Node *head){
    Node *prev = NULL;
    Node *curr = head;   
    Node *forw = NULL;

    while(curr != NULL){
        forw = curr->next;
        
        curr->next = prev;    
    
        prev = curr;
        curr = forw; 
    }
    
    head = prev;
}
int main(){
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    cout << "Before reversal:\n";
    print_ll(head);
    
    reverse_ll(head);
    
    cout << "After reversal:\n";
    print_ll(head);
}

