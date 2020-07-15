#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	int arr[30][2];
	for(int i = 0; i < n; i++){
		cin >> arr[i][0];
		cin >> arr[i][1];
	}

	int changes = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j && arr[i][0] == arr[j][1]){
				changes++;
			}
		}	
	}

	cout << changes << endl;
}