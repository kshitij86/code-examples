// Finds the length of the longest common substring.

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

// LCS Function
int lcs(string s1, string s2, int m, int n){
    // If either string is empty
    if(m == 0 || n == 0)
        return 0;
    
    // Found a character of LCS
    if(s1[m-1] == s2[n-1])
        return 1 + lcs(s1, s2, m-1, n-1);

    // If not a match
    if(s1[m-1] != s2[n-1])
        return max(lcs(s1, s2, m-1, n), lcs(s1, s2, m, n-1)); 
}

int main(){
    string s1, s2;    
    
    cout << "Enter the first string:\n";
    cin >> s1;
 
    cout << "Enter the second string:\n";
    cin >> s2;
    
    int m = s1.length(), n = s2.length();
    
    int len = lcs(s1, s2, m, n);
    cout << "Length of Longes Common Substring: " << len << nl;
}

