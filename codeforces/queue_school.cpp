#include <bits/stdc++.h>
using namespace std;

string afterQ(string q)
{
    unordered_set<int> st;
    for (int i = 0; i < q.length(); i++)
    {
        if (q[i] == 'B' && q[i + 1] == 'G' && st.find(i) == st.end() && st.find(i + 1) == st.end())
        {
            st.insert(i);
            st.insert(i + 1);
            swap(q[i], q[i + 1]);
        }
    }

    return q;
}

int main()
{
    int n, t;
    string q;
    cin >> n >> t;
    cin >> q;

    for (int i = 0; i < t; i++)
    {
        q = afterQ(q);
    }

    cout << q;
}