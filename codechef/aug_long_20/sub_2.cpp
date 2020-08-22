#include <bits/stdc++.h>
using namespace std;
#define FIO                                               \
    {                                                     \
        ios::sync_with_stdio(0), cin.tie(0), cout.tie(0); \
    }
#define ll long long int
#define vi vector<ll>
#define vpii vector<pair<ll, ll>>
#define mp make_pair
#define pb emplace_back
#define INF 1000000000000
#define mi map<int>
#define mii unordered_map<ll, ll>
#define line '\n'
#define B break
#define R return
#define C continue
#define F first
#define S second

ll power(ll x, ll n, ll mod)
{
    ll res = 1;
    x %= mod;
    while (n)
    {
        if (n & 1)
            res = (res * x) % mod;
        x = (x * x) % mod;
        n >>= 1;
    }
    return res;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i <= n; i++)
        {
            cout << power(2, n - i, 1000000007) << ' ';
        }
        cout << endl;
    }
}