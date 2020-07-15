#include <bits/stdc++.h>
using namespace std;

bool isDiff(int year)
{
    string st = to_string(year);
    sort(st.begin(), st.end());
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == st[i + 1])
            return false;
    }

    return true;
}

int bYear(int year)
{
    for (int i = year + 1; i <= 9000; i++)
    {
        if (isDiff(i))
            return i;
    }

    return -1;
}

int main()
{
    int year;
    cin >> year;
    cout << bYear(year) << endl;
}