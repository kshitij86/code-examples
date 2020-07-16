#include <bits/stdc++.h>
using namespace std;

/*
 _ _ _ X
 _ _ X _
 _ X _ _
 _ _ _ _
*/

vector<vector<int>> grid = {{0, 0, 0, 0},
							{0 ,0, 0, 0},
							{0 ,0 ,0 ,0},
							{0, 0, 0, 0}};

int n = 4;
int m = 4;

void countPaths() {
	int dp[n][m];

	memset(dp, 0, sizeof(dp));

	// Reaching the cells of first row or column has only one way
	for(int i = 0; i < n; i++){
		dp[i][0] = 1;
	}

	for(int j = 0; j < m; j++){
		dp[0][j] = 1;
	}

	for(int i = 1; i < n; i++){
		for(int j = 1; j < m; j++){
			dp[i][j] = dp[i-1][j] + dp[i][j-1];
		}
	}

	cout << dp[n-1][m-1] << endl;
}

int main() {
	cin.tie(0);
	countPaths();
}