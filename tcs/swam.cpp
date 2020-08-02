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

	static int n, m, r, ctr(0);
	string b, g;

	cin >> n;
	cin >> b >> g;

	int bsize = b.length();
	int gsize = g.length();

	for(int i = 0; i < gsize; i++){
		if(g[i] == 'r')
			r++;
		else
			m++;
	}

	for(int j = 0; j < bsize; j++){
		if(b[j] == 'r'){
			if(r > 0){
				r--;
				ctr++;
			} else break;
		}
		else{
			if(m > 0){
				m--;
				ctr++;
			} else break;
		}
	}

	cout << n - ctr << endl;
}