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

struct Item
{
	double w, v, r;
	Item() {}
	void set_data(double w, double v)
	{
		this->w = w;
		this->v = v;
		this->r = (double)(v / w);
	}
};

double knap_max_value(int n, Item items[], int W)
{
	if (n == 0 || W == 0)
		return 0;

	if (items[n - 1].w > W)
		return knap_max_value(n - 1, items, W);

	if (items[n - 1].w <= W)
		return max(knap_max_value(n - 1, items, W), items[n - 1].v + knap_max_value(n - 1, items, W - items[n - 1].w));
}

bool cmp(Item a, Item b)
{
	return a.r > b.r;
}

int knapSack(int W, int wt[], int val[], int n)
{
	int i, w;
	int K[n + 1][W + 1];

	// Build table K[][] in bottom up manner 
	for (i = 0; i <= n; i++) {
		for (w = 0; w <= W; w++) {
			if (i == 0 || w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = max(
					val[i - 1] + K[i - 1][w - wt[i - 1]],
					K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	}

	return K[n][W];
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);

	int n, w, v, i = 0, m = 0;
	cin >> n;

	int wt[n];
	int val[n];
	Item items[n];

	rep(i, n)
	{
		cin >> w >> v;
		wt[i] = w;
		val[i] = v;
		items[i].set_data(w, v);
		m += w;
	}

	// REP(i, 0, n)
	// {
	// 	cout << items[i].r << " ";
	// }

	// cout << endl;

	// sort(items, items + n, cmp);

	// REP(i, 0, n)
	// {
	// 	cout << items[i].r << " ";
	// }

	// rep(i, m)
	// {
	// 	cout << knap_max_value(n, items, i + 1) << " ";
	// }

	rep(i, m)
	{
		if (i != 0) {
			cout << knapSack(i, wt, val, n) << " ";
		}
	}

	cout << endl;
}
