#include <bits/stdc++.h>
using namespace std;

int r = 3, c = 3;

vector<vector<int>> matrix_block_sum(vector<vector<int>> arr, int K){
	vector<vector<int>> result (r, vector<int>(c));

	int min_row, max_row, min_col, max_col;

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(i-K < 0){
				min_row = 0;
			} else {
				min_row = i-K;
			}

			if(i+K > r-1){
				max_row = r-1;
			} else {
				max_row = i+K;
			}

			if(j-K < 0){
				min_col = 0;
			} else {
				min_col = j-K;
			}

			if(j+K > c-1){
				max_col = c-1;
			} else {
				max_col = j+K;
			}

			int sum = 0;
			// Calc the sum
			for(int u = min_row; u <= max_row; u++){
				for(int z = min_col; z <= max_col; z++){
					sum += arr[u][z];
				}
			}

			result[i][j] = sum;
		}
	}

	return result;
}

int main(){

	vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};

	int K = 1;

	vector<vector<int>> block = matrix_block_sum(arr, K);

	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << block[i][j] << " ";
		}
		cout << endl;
	}
}