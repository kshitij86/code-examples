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

bool cmp(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b)
{
	if (a.second.first == b.second.first)
		return a.second.second < b.second.second;
	return a.second.first < b.second.first;
}

vector<string> vis_att(vector<pair<string, pair<int, int>>> a, ll n, ll k, ll v)
{
	for (int i = 0; i < v - 1; i++)
	{
		// Each visit
		for (int j = 0; j < k; j++)
		{
			a[j].second.first++;
		}
		sort(a.begin(), a.end(), cmp);
	}

	vector<string> res;
	for (int i = 0; i < k; i++)
	{
		res.pb(a[i].first);
	}

	reverse(res.begin(), res.end());

	return res;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	ll test, n, i = 1, k, v;
	vector<string> f;
	string temp;
	ifstream fin;
	ofstream fout;

	fin.open("attr_tst_ip.txt");
	fout.open("attr_op.txt");

	fin >> test;

	while (test--)
	{
		fin >> n >> k >> v;
		vector<pair<string, pair<int, int>>> a;

		for (int j = 0; j < n; j++)
		{
			fin >> temp;
			a.pb({temp, {0, j}});
		}

		// for (int j = 0; j < n; j++)
		// {
		// 	cout << a[j].first << endl;
		// }

		// for (int j = 0; j < n; j++)
		// {
		// 	fin >> temp;
		// 	fout << a[j].first << " " << a[j].second.first << " " << a[j].second.second;
		// }

		f = vis_att(a, n, k, v);
		fout << "Case #" << i << ": ";
		for (int i = 0; i < f.size(); i++)
		{
			fout << f[i] << " ";
		}
		fout << endl;
	}
}