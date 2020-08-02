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

int n = 0;
bool no_one_prod(int x){
	int prod = 1;
	while(x > 0){
		if(x % 10 == 1)
			return false;
		prod *= x % 10;
		x /= 10;
	}
	return prod == n;
}

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int ctr = 0;
	cin >> n;
	assert(n <= 100);

	for(int i = 1; i < 100; i++){
		if(no_one_prod(i))
			ctr ++;
	}

	cout << ctr << endl;
}