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

bool isEqual(veci a, veci b){
	for(int i = 0; i < a.size(); i++){
		if(a[i] != b[i])
			return false;
	}
	return true;
}

int time_mon(int n, veci pat){
	int t(0);
	veci new_pat = pat;

	do{
		print_vector(new_pat);
		t++;	
		veci temp(n);
		for(int i = 0; i < n; i++){
			temp[new_pat[i]-1] = new_pat[i];
		}
		new_pat.clear();
		new_pat = temp;
	}while(!isEqual(pat, new_pat));

	return t;
}

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int n, test, x;
	veci pat;
	
	cin >> test;
	while(test--){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> x;
			pat.pb(x); 
		}

		cout << time_mon(n, pat) << endl;
	}
}