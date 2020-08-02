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
	
	ll test, n, s, d;
	cin >> test;

	while(test--){
		string h = "";
		cin >> n >> s;
		for(int i = 0; i < n; i++){
			cin >> d;
			if(d%s == 0)
				h += "1";
			else
				h += "0"; 
		}

		cout << h << endl;
	}
}