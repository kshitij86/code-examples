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

	int test;
	string a, b;

	cin >> test;

	while (test--)
	{
		cin >> a >> b;
		string temp = "";

		int i;
		rep(i, a.length()) {
			if (find(b.begin(), b.end(), a[i]) == b.end()) {
				temp += a[i];
			}
		}

		cout << temp << endl;
	}
}
