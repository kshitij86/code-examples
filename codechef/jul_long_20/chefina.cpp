#include<bits/stdc++.h>
using namespace std;

#define pb push_back
typedef multiset<int, greater<int>> mst;
typedef vector<int> vec;


bool checkr(vec a, vec b, int n){
    for(int i = 0; i < n; i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}


int main(){
    int test, n;
    vec a, b;

    cin >> test;
    
    while(test--){
        cin >> n;
        int x;
        for(int i = 0; i < n; i++){
            cin >> x;
            a.pb(x);
        }        
        
        for(int i = 0; i < n; i++){
            cin >> x;
            b.pb(x);
        }
       
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(checkr(a, b, n)){
            cout << "0";
        } else {
            int cnt = 0;
            map<int, int> m1, m2;  
            
            for(int i: a){
                if(m1.find(i) == m1.end())
                    m1[i] = 1;
                else
                    m1[i] ++;    
            }
                
            for(int i: b){
                if(m2.find(i) == m2.end())
                    m2[i] = 1;
                else
                    m2[i] ++;    
            }
       }
    
    }
}

