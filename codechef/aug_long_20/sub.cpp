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

ll subs_freq_fun(ll x, ll n, ll mod)
{
	ll res = 1;
	x %= mod;
	while (n)
	{
		if (n & 1)
			res = (res * x) % mod;
		x = (x * x) % mod;
		n >>= 1;
	}
	return res;
}

int main()
{
	const int BIG_CHUNGUS = 1000000007;
	int test, n, x, i;

	cin >> test;

	while (test--)
	{
		veci arr, b;
		map<int, int> mp;

		cin >> n;
		rep(i, n)
		{
			cin >> x;
			arr.push_back(x);
		}

		rep(i, n)
		{
			cout << subs_freq_fun(2, n - i, BIG_CHUNGUS);
		}
		cout << endl;
		return 0;
	}