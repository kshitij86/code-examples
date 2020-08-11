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

int wed(int n, int k, int *arr) {
	ll c = k, a = 0, i, res = k;
	vector<int> tab;

	for (int i = 0; i < n; i++) {
		cout << "Considering: " << arr[i] << endl;

		if (find(tab.begin(), tab.end(), arr[i]) == tab.end()) {
			tab.push_back(arr[i]);
		}
		else {// already contains a guest
			int cnt = count(tab.begin(), tab.end(), arr[i]) + 1;
			if ((cnt + c) > a + c + k) {
				c += k;
				// A new table
				tab.clear();
				tab.push_back(arr[i]);
				cout << "Added new table" << endl;
			}
			else if ((cnt + c) <= a + c + k) {
				a = cnt;
				tab.push_back(arr[i]);
				cout << "Let another arg" << endl;
			}
			res = c + a;
		}
		cout << "c: " << c << " a :" << a <<  endl;
		cout << "Table: ";
		print_vector(tab);
		cout << "res: " <<  res << endl;
	}

	return res;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int test, n, k;
	cin >> test;

	while (test--)
	{
		cin >> n >> k;
		int *arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		cout << wed(n, k, arr) << endl;
	}
}
