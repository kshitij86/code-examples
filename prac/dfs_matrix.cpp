#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<int> veci;
typedef vector<vector<int>> vecv;

int r = 4, c = 4; 

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

bool is_valid(int i, int j){
	return (i >= 0 && i < r && j >= 0 && j < c);
}

void try_dfs(vecv &grid){
	int r = grid.size();
	int c = grid[0].size();
	/*
		(0,0) (0,1) (0,2)
		(1,0) (1,1) (1,2)
		(2,0) (2,1) (2,2)
	*/

	int i, j, sum = 0;
	stack<pair<int, int>> st;
	st.push({0,0});

	while(!st.empty()){
		i = st.top().first;
		j = st.top().second;
		st.pop();

		if(!grid[i][j]){
			grid[i][j] = 1;
			cout << "Visited: [" << i << "," << j << "]" << endl;
			if(i == j){
				print_vectorv(grid);
				cout << endl;
			}

			if(is_valid(i+1, j) && !grid[i+1][j]) st.push({i+1, j});
			if(is_valid(i, j+1) && !grid[i][j+1]) st.push({i, j+1});
			if(is_valid(i-1, j) && !grid[i-1][j]) st.push({i-1, j});
			if(is_valid(i, j-1) && !grid[i][j-1]) st.push({i, j-1});
		}
	}

}

int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	cin >> r >> c;
	if(r != c){
		cout << "rows and cols don't match\n";
		exit(0);
	}

	vecv grid (r, veci (c));

	// print_vectorv(grid);

	try_dfs(grid);

	// print_vectorv(grid);

}