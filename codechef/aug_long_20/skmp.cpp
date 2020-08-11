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

string skmp(string a, string, int x, int y) {
	
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int test, x, y;
	string s, p, temp = "";
	cin >> test;

	while (test--)
	{
		cin >> s >> p;
		x = s.length();
		y = p.length();

		// 1.Remove the pattern from string
		// 2.Sort remaining chars in string
		// 3.Insert string in right place

		cout << skmp(s, p, x, y) << endl;
	}
}
