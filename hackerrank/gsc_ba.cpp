#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

float calcTax(int n, int a[], int x, float k)
{
	float tax = 0;
	for (int i = 0; i < n; i++)
	{
		tax += max(k, (float)a[i] * (x / 100));
	}
	return tax;
}

int main()
{
	int q, n, k, x;
	float d;

	cin >> q;
	while (q--)
	{
		cin >> n >> k >> x >> d;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		cout << endl;
		float ct = calcTax(n, a, x, k);
		cout << "CT: " << ct << endl;
		if (ct > d)
			cout << "upfront\n";
		else if (ct < d)
			cout << "fee\n";
		else if (ct == d)
			cout << "fee\n";
	}
	return 0;
}
