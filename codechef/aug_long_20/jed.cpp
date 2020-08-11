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

int saber(int h, int p) {
	while (h > 0 && p > 0) {
		h -= p;
		p /= 2;
		if (p > h) {
			return 1;
		}
		// cout << endl << h << " : " << p << endl;
	}

	if (h == 0) {
		return 1;
	}
	return 0;
}

int main()
{
	// cin.tie(NULL);
	// ios_base::sync_with_stdio(0);

	int test, h, p;
	cin >> test;

	for (int i = 0; i < test; i++)
	{
		cin >> h >> p;
		cout << saber(h, p) << endl;
	}
}
