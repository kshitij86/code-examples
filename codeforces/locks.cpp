#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int res = 0;
	for(int i = 0; i < n-1; i++){
		res += n;
	}

	cout << res + 1 << endl;
}