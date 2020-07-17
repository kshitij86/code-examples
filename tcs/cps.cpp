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


bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

veci genPrimes(int n){
	veci p;

	for(int i = 2; i < n; i++){
		if(isPrime(i)){
			p.pb(i);
		}
	}

	// print_vector(p);

	return p;
}

int primeSum(veci p) {
	int ctr = 0; 

	for(int i = 0; i < p.size(); i++){

		int sum = 0;
		for(int j = 0; j < p.size(); j++){
			if(sum >= p[i])
				break;

			sum += p[j];
		}

		if(sum == p[i] && p[i] != 2){
			ctr += 1;
			// cout << sum << endl;
		}
	}

	return ctr;
}

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int n;
	cin >> n;

	veci p = genPrimes(n);
	cout << primeSum(p) << endl;
}