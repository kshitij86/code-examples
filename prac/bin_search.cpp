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

int b_search(int n, int arr[], int target, int l, int r)
{
	if (r >= l)
	{
		int mid = (l + r) / 2;
		// cout << mid << endl;

		if (arr[mid] == target)
			return mid;

		if (arr[mid] > target)
			return b_search(n, arr, target, l, mid - 1);

		return b_search(n, arr, target, mid + 1, r);
	}

	return -1;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n = 5, target = 10, i;

	int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	cout << "Found at: " << b_search(n, arr, target, 0, n - 1) << endl;
}
