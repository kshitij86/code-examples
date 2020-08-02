// Excelling at dynamic programming

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef long long ll;
typedef vector<int> veci;
typedef vector<vector<int>> vecv;

void print_vector(veci v)
{
	for (int i : v)
	{
		cout << i << " ";
	}
	cout << endl;
}

void print_vectorv(vecv v)
{
	for (veci i : v)
	{
		print_vector(i);
	}
}

ll sumFib(ll n)
{
	ll table[n];
	memset(table, -1, sizeof(table));

	ll sum = 0;

	table[0] = 0;
	table[1] = 1;

	for (ll i = 0; i < n; i++)
	{
		if (table[i] != -1)
			sum += table[i];
		else
		{
			table[i] = table[i - 1] + table[i - 2];
			sum += table[i];
		}
	}

	return sum;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	ll n;
	cin >> n;

	cout << sumFib(n) << endl;
}