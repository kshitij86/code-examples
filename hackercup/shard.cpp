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

char det_shard(ll n, string sh)
{
	ll ct_A(0), ct_B(0);

	for (ll i = 0; i < n; i++)
	{
		switch (sh[i])
		{
		case 'A':
			ct_A++;
			break;
		case 'B':
			ct_B++;
			break;
		}
	}

	if (abs(ct_A - ct_B) <= 1)
	{
		return 'Y';
	}
	return 'N';
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	ll T, n, i = 1;
	string sh;
	ifstream fin;
	ofstream fout;

	fin.open("shard_ip.txt");
	fout.open("shard_op.txt");

	fin >> T;

	while (T--)
	{
		fin >> n >> sh;
		fout << "Case #" << i << ": " << det_shard(n, sh) << endl;
		i++;
	}
}