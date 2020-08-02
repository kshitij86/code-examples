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

veci bigSmall(int x){
	veci temp(3);
	int i = 0;
	while(x > 0){
		temp[i] = x%10;
		i++;
		x /= 10;
	}
	return {*max_element(temp.begin(), temp.end()), *min_element(temp.begin(), temp.end())};
}

vector<string> calcBitScores(int n, int digs[]){
	vector<string> scores; 
	for(int i = 0; i < n; i++){
		veci temp = bigSmall(digs[i]);
		string sc = to_string(((11 * temp[0] + 7 * temp[1])) % 100);
		if(sc.length() == 1){
			scores.pb("0" + sc);
		} else {
			scores.pb(sc);
		}
	}
	return scores;
}

bool isMatch(int x, int y){
	if((x%2 ==0 && y%2 == 0) || (x%2 != 0 && y%2 != 0))
		return true;
	return false;
}

int digitPairs(int n, int digs[]){
	vector<string> scores = calcBitScores(n, digs);
	int size = scores.size();
	set<int> st;
	map<char,int> ps;
	int ctr (0);

	// for(string i: scores){
	// 	cout << i << " ";
	// }
	// cout << endl;

	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(i != j && isMatch(i,j) && scores[i][0] == scores[j][0] && ps[scores[i][0]] < 2 && st.find(j) == st.end() && st.find(i) == st.end()){
				st.insert(j);
				ps[scores[i][0]] += 1;
			}
		}		
		st.insert(i);
	}

	// Print map
	for(auto it = ps.begin(); it != ps.end(); it++){
		ctr += it->second;
		// cout << it->first << " " << it->second << endl;
	}
	
	return ctr;
}

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	int n;
	cin >> n;
	int digs[n];

	for(int i = 0; i < n; i++){
		cin >> digs[i];
	}

	cout << digitPairs(n, digs) << endl; 
}