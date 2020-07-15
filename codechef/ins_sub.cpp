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

int main(){
    
    int test, n, k, x;
    cin >> test;
    veci sub;
    vecv b;    

    while(test > 0){
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> x;
            sub.pb(x);
        }
        if(k > 0){
            for(int i = 0; i < n-k; i++){
                veci temp;
                for(int j = i; j < k; j++){
                    temp.pb(sub[j];)
                }
            }
        } else {
            cout << 0;
        }
        test -= 1;

    }
}

