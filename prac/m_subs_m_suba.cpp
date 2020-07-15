#include <bits/stdc++.h>
using namespace std;


int max_subs(int n, int arr[]){
	int max_sum;
	
	return max_sum;
}

// Max sum of subarray using Kadane's
int max_suba(int n, int arr[]){
	int max_so_far = INT_MIN, max_ending_here = 0;

	for(int i = 0; i < n; i++){
		max_ending_here += arr[i];

		if(max_ending_here > max_so_far){
			max_so_far = max_ending_here;
		}

		if(max_ending_here < 0){
			max_ending_here = 0;
		}
	}

	return max_so_far;
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	cout << max_suba(n, arr) << " " << max_subs(n, arr) << endl;
}