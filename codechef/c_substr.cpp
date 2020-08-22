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

bool isValid(string h)
{
	return (h[0] == '1' && h[h.length() - 1] == '1');
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int test, n;
	string o;
	cin >> test;

	while (test--)
	{
		int ctr = 0;
		cin >> n >> o;
		for (int i = 0; i < n; i++)
		{
			if (o[i] == '1')
				ctr++;
		}

		// for (int i = 0; i < n; i++)
		// {
		// 	for (int j = n-1; j >= i; j--)
		// 	{
		// 		if(o[i] == '1' && o[j] == '1')
		// 			ctr ++;
		// 	}
		// }
		cout << (ctr*(ctr+1))/2 << endl;
	}
}

// 1111
// 0123