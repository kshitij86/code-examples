// Program to check prime numbers in given range

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

bool checkPrime(int x)
{
	int ct = 0;
	for (int i = 1; i * i < x; i++)
	{
		if (i * i == x)
		{
			ct++;
		}
		else
		{
			ct += 2;
		}
	}

	return ct == 2;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n;

	cin >> n;

	int primes[n + 1];
	memset(primes, 1, sizeof(primes));

	primes[0] = 0;
	primes[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		if (primes[i])
		{
			cout << i << endl;
			int x = i;
			for (int j = x; j <= n; j *= x)
			{
				if (j != x)
					primes[j] = 0;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << primes[i] << " ";
	}
	cout << endl;
	cout << count(primes, primes + n, 1);
}