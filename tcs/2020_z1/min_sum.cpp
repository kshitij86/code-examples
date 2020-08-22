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

int sumx(int n, int *arr)
{
	static int i, sum;

	rep(i, n)
		sum += arr[i];

	return sum;
}

int min_sum(int n, int k, int *&arr)
{
	if (k == 0)
	{
		return sumx(n, arr);
	}
	sort(arr, arr + n);
	arr[n - 1] = floor(arr[n - 1] / 2);

	return min_sum(n, k - 1, arr);
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, k, i;
	cin >> n >> k;
	int *arr = new int[n];

	// Allowed K ops
	rep(i, n)
	{
		cin >> arr[i];
	}

	cout << min_sum(n, k, arr) << endl;
}
