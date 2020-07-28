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

int n = 4;
int b[n][n];
void init_board(){
	memset(b, -1, sizeof(b));
}

bool check_col(int j){
	for(int i = 0; i < j; i++){
		if(b[i][j] == 0)
			return false;
	}
	return true;
}

bool check_diag(int i, int j){
	// Left upper diag
	for(int k = 0; k < i; k++){
		if(b[k][k] == 0) return false;
	}

	// Right Upper diag
	for(int k = 0; k < i; k++){
		for(int m = 0; m < j; m++){
			if(k+m == n){
				if(b[k][m]) return false;
			}
		}
	}

	// Diagonals are clear
	return true;
}

void fill_board(int i, int j){
	if(!check_col(j) && !check_diag(i,j))
		b[i][j] = 0;

	else{
		cout << "Not possible";
	}
}

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	
	cout << "Enter no. of queens:\n"
	cin >> n;
	init_board();

}