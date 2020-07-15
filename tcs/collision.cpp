#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;

double timex(int x, int y, int s)
{
    x = abs(x);
    y = abs(y);
    double dist = sqrt(x * x + y * y);

    return (double)dist / s;
}

int main()
{
    int test;
    cin >> test;

    int x, y, s, coll(0);
    map<double, int> mp;
    while (test--)
    {
        cin >> x >> y >> s;
        int t = timex(x, y, s);
        if (mp.find(t) != mp.end())
        {
            mp[t]++;
        }
        else
        {
            mp[t] = 1;
        }
    }

    vec ghj;
    for (map<double, int>::iterator it = mp.begin(); it != mp.end(); ++it)
    {
        ghj.push_back(it->second);
    }

    for (int i : ghj)
    {
        int temp = 0;
        for (int j = 1; j < i; j++)
            temp += j;
        coll += temp;
    }

    cout << coll << endl;
}