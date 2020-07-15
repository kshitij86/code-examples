// Program to implement 0-1 knapsack using DP

#include <bits/stdc++.h>
using namespace std;

#define pb push_back
typedef vector<int> vec;
typedef vector<vector<int>> vecv;

void print_vec(vec x)
{
    for (int i : x)
        cout << i << " ";
    cout << endl;
}

int dp(vec weights, vec values, int w, int n, vec mem)
{
    if (n == 0)
    {
        return 0;
    }

    if (weights[n - 1] > w)
    {
        return dp(weights, values, w, n - 1, mem);
    }
    else
    {
        if (mem[n - 1] == -1)
        {
            mem[n - 1] = max(values[n - 1] + dp(weights, values, w - weights[n - 1], n - 1, mem), dp(weights, values, w, n - 1, mem));
            return max(values[n - 1] + dp(weights, values, w - weights[n - 1], n - 1, mem), dp(weights, values, w, n - 1, mem));
        }
        else
        {
            return mem[n - 1];
        }
    }
}

int main()
{
    // Values of items
    int n, w, x;
    vec mem, values, weights;

    cout << "No. of items:\n";
    cin >> n;

    cout << "Weights capacity\n";
    cin >> w;

    cout << "Weights \n";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        weights.pb(x);
    }

    cout << "Values: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        values.pb(x);
    }

    // Set mem to -1
    for (int i = 0; i < n; i++)
    {
        mem.pb(-1);
    }

    int max_val = dp(weights, values, w, n, mem);
    cout << max_val << endl;
}
