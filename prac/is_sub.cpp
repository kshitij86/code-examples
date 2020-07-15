// program to check if substring exists using recusrion.
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
typedef vector<int> vec;
typedef vector<vector<int>> vecv;
 
void print_vec(vec x){
    for(int i: x)
        cout << i << " " ;
    cout << endl;

}

bool is_sub(vector<char> s1, vector<char> s2, int m, int n){
    // We looked at all characters and didn't find all of them
    if(m == 0 && n != 0)
        return false;
    
    // We looked at all and we found all
    if(m == 0 && n == 0)
        return true;
    // Current character does not match    
    if(s1[m-1] != s2[n-1])
        return is_sub(s1, s2, m-1, n);
    
    // Current character matches
    if(s1[m-1] == s2[n-1])
        return is_sub(s1, s2, m-1, n-1);
}

int main(){
    int m, n;
    char x;
    vector<char> s1, s2;
    
    cout << "Length of first string\n";
    cin >> m;

    
    cout << "Length of second string\n";
    cin >> n;

    cout << "Enter first string\n";
    for(int i = 0; i < m; i++){
        cin >> x;
        s1.pb(x);
    }
 
    cout << "Enter second string\n";
    for(int i = 0; i < n; i++){
        cin >> x;
        s2.pb(x);
    }

    is_sub(s1, s2, m, n) ? cout << "It is a substring" : cout << "It is not a substring" << endl;
}

