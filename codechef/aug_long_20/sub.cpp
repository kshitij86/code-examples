#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef vector<int> veci;
typedef vector<string> vecs;
typedef vector<long> vecl;
typedef vector<vector<int>> vecvi;
typedef vector<vector<string>> vecvs;
#define REP(i, a, b) for (i = a; i < b; i++)
#define rep(i, n) REP(i, 0, n)

void print_arr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void print_vector(veci arr)
{
	for (int i : arr)
	{
		cout << i << " ";
	}
	cout << endl;
}

void print_vectorv(vecvi arr)
{
	for (veci i : arr)
	{
		print_vector(i);
	}
	cout << endl;
}

map<int, int> global_map;

int printArray(vector<int> arr, int n)
{
	int i;
	map<int, int> mp;

	int max = INT_MIN;
	int res = -1;

	for (int i = 0; i < n; i++) {
		if (mp.find(arr[i]) == mp.end()) {
			mp[arr[i]] = 0;
		}
		else {
			mp[arr[i]]++;
		}
	}
	for (auto it = mp.begin(); it != mp.end(); it++) {
		if (it->second > max) {
			res = it->first;
			max = it->second;
		}
	}
	return res;
}


void printSubsequences(vector<int> arr, int index, vector<int> subarr)
{
	if (index == arr.size())
	{
		int l = subarr.size();

		if (l != 0) {
			int max_c = printArray(subarr, l);
			if (global_map.find(max_c) == global_map.end()) {
				global_map[max_c] = 1;
			}
			else {
				global_map[max_c]++;
			}
		}
	}
	else
	{
		printSubsequences(arr, index + 1, subarr);

		subarr.push_back(arr[index]);

		printSubsequences(arr, index + 1, subarr);
	}
	return;
}

int main()
{
	int test, n, x, i;

	cin >> test;

	while (test--) {
		veci arr, b;
		map<int, int> mp;

		cin >> n;
		rep(i, n) {
			cin >> x;
			arr.push_back(x);
		}
		printSubsequences(arr, 0, b);

		rep(i, n) {
			if (global_map.find(i+1) == global_map.end()) {
				cout <<  0;
			}
			else {
				cout << global_map[i+1];
			}
			i == n-1 ? cout << endl: cout << " ";
		}
		global_map.clear();
	}

	return 0;
}