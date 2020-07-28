#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<int> veci;
typedef vector<vector<int>> vecv;

void print_vector(veci v){
	for(int i: v){
		cout << i <<"\t";
	}
	cout << endl;
}

void print_vectorv(vecv v){
	for(veci i: v){
		print_vector(i);
	}
}

int n;
veci path;

// Just going down and right
bool isValid(int i, int j){
	return (i < n && j < n);
}

// Greedily find the path to bottom right
void max_cost(vecv grid, int x, int y){
	path.pb(grid[x][y]);
	cout << "Chose: [" << x << "," << y << "]" << endl;

	if(x == n-1 && y == n-1)
		return;

	if(isValid(x+1, y) && grid[x+1][y] > grid[x][y+1]) 
		max_cost(grid, x+1, y);
	else if(isValid(x, y+1)) 
		max_cost(grid, x, y+1);
}

int main(){
	// cin.tie(NULL);
	// ios_base::sync_with_stdio(0);
	
	
	cout << "Enter grid size: ";
	cin >> n;

	vecv grid(n, veci(n));
	srand(time(NULL));

	for(int i = 0; i < grid.size(); i++){
		for(int j = 0; j < grid[0].size(); j++){
			// Between 1 and 10
			grid[i][j] = rand() % 100 + 1;
		}
	}
	print_vectorv(grid);

	max_cost(grid, 0, 0);
	print_vector(path);

}