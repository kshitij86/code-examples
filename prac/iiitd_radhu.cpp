#include <bits/stdc++.h>
using namespace std;

// DONE

typedef long long ll;
typedef vector<int> veci;
typedef vector<string> vecs;
typedef vector<long> vecl;
typedef vector<vector<int>> vecvi;
typedef vector<vector<string>> vecvs;
#define REP(i, a, b) for (i = a; i < b; i++)
#define rep(i, n) REP(i, 0, n)
#define pb push_back

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

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int test, n, q, i = 0;
	cin >> test;

	while (test--)
	{
		cin >> n >> q;
		int arr[n], que[q];

		rep(i, n) {
			cin >> arr[i];
		}

		rep(i, q) {
			cin >> que[i];
		}

		for (int i = 0; i < q; i++) {
			// cout << que[i] << endl;
			cout << *max_element(arr, arr+(que[i])) << endl;
		}
		cout << endl;
	}
}
