#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int s, y;
    int cur = 0, max = INT_MIN;
    while (t--)
    {
        cin >> s;
        cin >> y;
        cur -= s;
        cur += y;
        if (cur >= max)
        {
            max = cur;
        }
    }

    cout << max << endl;
}