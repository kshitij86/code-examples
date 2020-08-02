#include<bits/stdc++.h>
using namespace std;

int main(){

    int test, n;
    cin >> test;

    while(test--){
        cin >> n;
        
        for(int i = 0; i < 64; i++){
            if(i % 8 == 0 && i != 0)
                cout << endl;
            if(i == 0)
                cout << 'O';
            else if(i < n)
                cout << '.'; 
            else
                cout << 'X';
                
        }
        cout << endl;
    }
}
