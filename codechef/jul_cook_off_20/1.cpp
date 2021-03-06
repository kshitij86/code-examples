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

	int test, n;
	string i;

	cin >> test;
	while(test--){
	    cin >> n;
		cin >> i;
		map<char,int> mp;
		bool flag = true;

		for(int g = 0; g < i.length(); g++){
			mp[i[g]]++;
		}

		for(auto it = mp.begin(); it != mp.end(); it++){
			if(it->second % 2 != 0)
				flag = false;
		}
		
		flag ? cout << "YES" : cout << "NO";
		cout << endl;
	}	
}