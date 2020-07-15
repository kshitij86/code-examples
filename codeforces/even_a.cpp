#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;

void pr(vector<pair<int, int>> l)
{
    for (pair<int, int> p : l)
    {

        cout << p.first << " " << p.second << endl;
    }
}

bool sen(vector<pair<int, int>> st, pair<int, int> a)
{
    for (pair<int, int> c : st)
    {
        if (c == a)
            return true;
    }

    return false;
}

int movesToEven(vec c)
{
    vector<pair<int, int>> parity_e;
    vector<pair<int, int>> parity_i;
    vector<pair<int, int>> st;

    int moves(0);
    for (int i = 0; i < c.size(); i++)
    {
        if (i % 2 != c[i] % 2)
        {
            parity_e.push_back({c[i] % 2, i});
            parity_i.push_back({i % 2, i});
        }
    }

    // for (pair<int, int> p : parity_e)
    // {

    //     cout << p.first << " " << p.second << endl;
    // }

    // cout << endl;

    // for (pair<int, int> p : parity_i)
    // {

    //     cout << p.first << " " << p.second << endl;
    // }

    if (parity_e.size() != parity_i.size())
        return -1;

    for (int i = 0; i < parity_e.size(); i++)
    {
        cout << "After " << i + 1 << " rounds: \n";
        cout << "parity_e\n";
        pr(parity_e);

        cout << "parity_i\n";
        pr(parity_i);

        // Find a suitable match with equal parity
        for (int j = 0; j < parity_e.size(); j++)
        {
            if (parity_i[j].first == parity_e[i].first && !sen(st, {i, j}))
            {
                moves++;
                st.push_back({i, j});
            }
        }
    }

    return (int)moves / 2;
}

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int m;
        vec c;
        cin >> m;
        while (m--)
        {
            int x;
            cin >> x;
            c.push_back(x);
        }

        cout << movesToEven(c) << endl;
    }
}