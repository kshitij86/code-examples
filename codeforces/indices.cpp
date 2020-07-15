#include<bits/stdc++.h>
using namespace std;

#define pb push_back

void indices(int n, int v[]){
  string flag = "NO";
  if(n < 3){
    cout << flag << endl;
    return;
  }
  
  int i;
  for(i = 1; i <= n-2; i++){
    if(v[i] > v[i-1] &&  v[i] > v[i+1]){
      flag = "YES";
      break;
    }
  }

  cout << flag << endl;
  if(flag == "YES"){
    cout << i<< " " << i+1 << " " << i+2 << endl;
  }
}

int main(){
  int test;
  cin >> test;

  while(test--){
    int n;
    cin >> n;
    int v[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
  
    indices(n, v);
  }
}
