// Subset sum using DP

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

bool ss(vec arr, int sum, int n, vector<bool> mem){
    // If we find sum in arr
    if(sum == 0)
        return true;

    // We don't find the sum
    if(sum > 0 && n == 0)
        return false;

    // Element greater than sum
    if(sum < arr[n-1])
        return ss(arr, sum, n-1, mem);

    // Potential for sum
    if(arr[n-1] <= sum){
        if(mem[n-1] == -1){
            mem[n-1] = ss(arr, sum - arr[n-1], n-1, mem);
            return ss(arr, sum - arr[n-1], n-1, mem);
        } else {
            return mem[n-1];
        }
    }
}

int main(){
    int sum, n, x;
    vec arr;
    vector<bool> mem;
    
    cout << "Enter the sum:\n";
    cin >> sum;
    
    cout << "Enter the number of values:\n";
    cin >> n;
    
    cout << "Enter the values:\n";
    for(int i = 0; i < n; i++){
        cin >> x;
        arr.pb(x); 
    }   
    
    // Set mem to -1
    for (int i = 0; i < n; i++){
        mem.pb(true);
    }

    ss(arr, sum, n, mem) ? cout << "Sum exists"  : cout << "Sum absent";
    cout << endl;
}

