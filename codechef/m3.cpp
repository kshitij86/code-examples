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

void inc(long arr[], long a, long b) {
	for (long i = a; i <= b; i++) {
		arr[i]++;
	}
}

long div3(long arr[], long a, long b) {
	long ctr = 0;

	for (long i = a; i <= b; i++) {
		if (arr[i] % 3 == 0) ctr++;
	}
	return ctr;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	long n, q, a, b, c;
	cin >> n >> q;

	long arr[n];
	memset(arr, 0, sizeof(arr));

	while (q--) {
		cin >> c >> a >> b;
		if (c == 1) {
			cout << div3(arr, a, b) << endl;
		}
		else if (c == 0) {
			inc(arr, a, b);
		}
	}
}
