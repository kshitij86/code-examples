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

void rock_ranges(ll n, ll m, int rocks[], int ranges[][2])
{
	veci ctr(m);
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < m; j++)
		{
			if (rocks[i] >= ranges[j][0] && rocks[i] <= ranges[j][1])
				ctr[j]++;
		}
	}

	print_vector(ctr);
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	ll n, m;
	cin >> n >> m;

	int rocks[n];
	for (int i = 0; i < n; i++)
	{
		cin >> rocks[i];
	}

	int ranges[m][2];
	for (int i = 0; i < m; i++)
	{
		cin >> ranges[i][0] >> ranges[i][1];
	}

	rock_ranges(n, m, rocks, ranges);
}