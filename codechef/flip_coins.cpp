#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);

    int n, q;
    cin >> n >> q;
    int x, y, z;
    // Tails up
    int coins[n];
    memset(coins, 1, sizeof(coins));

    while (q--)
    {
        cin >> x >> y >> z;
        if (x == 0)
        {
            for (int i = y; i <= z; i++)
                coins[i] == 1 ? coins[i] = 0 : coins[i] = 1;
        }
        else if (x == 1)
        {
            int ctr = 0;
            for (int i = y; i <= z; i++)
                if (coins[i] == 1)
                    ctr++;
            cout << ctr << endl;
        }
    }
}