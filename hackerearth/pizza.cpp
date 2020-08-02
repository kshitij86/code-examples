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

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	ll test, n;
	cin >> test;

	while(test--) {
	    cin >> n;
		cout << (int) ((n*(n+1)/2) + 1) << endl;
	}
}