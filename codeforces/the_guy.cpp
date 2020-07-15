#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;

int main()
{
    int levels;
    cin >> levels;

    vec X, Y;
    string s;

    getline(cin, s, ' ');
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
            X.push_back((int)s[i]);
    }

    getline(cin, s, ' ');
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
            Y.push_back((int)s[i]);
    }

    for (int h : X)
    {
        cout << h << " ";
    }
}