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

int chocolates(int r, int c){
	int ctr(0);

	while(r != 0 && c != 0){

		ctr ++;
		if(r > c){
			r = r - c;
		} else {
			c = c - r;
		}
	}

	return ctr;
}
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int x, y, a, b, chocs(0);

	cin >> x >> y >> a >> b;

	for(int i = x; i <= y; i++){
		for(int j = a; j <= b; j++){
			chocs += chocolates(i, j);
		}
	}

	cout << chocs << endl;
}