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

int morty(float n) {
	if ((int)n >= 0 && (int)n <= 9) {
		return 1;
	}
	return (int)ceil(n/9);
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	float test, a, b;
	cin >> test;

	while (test--)
	{
		cin >> a >> b;
		if (morty(a) == morty(b)) {
			// Rick
			cout << 1 << " " << morty(b) << endl;
		}
		else if (morty(a) > morty(b)) {
			cout << 1 << " " << morty(b) << endl;
		}
		else {
			cout << 0 << " " << morty(a) << endl;
		}
	}
}
