/* Kth largest factor of a number */

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

	int test, n, k, i;
	cin >> test;

	while (test--)
	{
		veci facs;
		int ctr = 0;
		cin >> n >> k;
		// No number has a factor greater than itself
		for (i = n; i >= 1; i--) {
			if (n % i == 0) {
				facs.pb(i);
			}
		}

		if (k <= facs.size()) {
			cout << facs[k-1] << endl;
		}
		else {
			// cout << "fac size: " << facs.size() << endl;
			// cout << (k-facs.size()) - 1 << endl;
			// reverse(facs.begin(), facs.end());
			// cout << facs[(k-facs.size()) - 1] << endl;
			cout << 1 << endl;
		}
	}
}
