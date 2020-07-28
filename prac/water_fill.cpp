#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<int> veci;
typedef vector<vector<int>> vecv;

void print_vector(veci v){
	for(int i: v){
		cout << i << " ";
	}
	cout << endl;
}

void print_vectorv(vecv v){
	for(veci i: v){
		print_vector(i);
	}
}


int max_val(int n, int x, int bottles[]){
    int cap = 0;
    sort(bottles, bottles+n);

    for(int i = 0; i < n; i++){
        if(x > bottles[i]){
            x -= bottles[i];
            cap++;
        } else break;
    }
    
    return cap;
}

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int n, x;
	cin >> n >> x;

    int bottles[n] = {0};

	for(int i = 0; i < n; i++){
        cin >> bottles[i];
	}

	cout << max_val(n, x, bottles);
}
