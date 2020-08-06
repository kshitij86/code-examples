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

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	static int test, n, x, prod = 1;
	cin >> test;

	while (test--)
	{
		int ctr = 0;
		cin >> n;

		int i = 0;
		rep(i, n)
		{
			cin >> x;
			prod *= x;
		}

		for (int i = 1; i <= prod; i++)
		{
			if (prod % i == 0)
				ctr++;
		}

		// for (int i : st)
		// 	cout << i << " ";
		// cout << endl;

		cout << ctr << endl;
		prod = 1;
	}
}
