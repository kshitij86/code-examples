#include <bits/stdc++.h>
using namespace std;

string winner(string matches)
{
    int anton(0), danik(0);

    for (char i : matches)
    {
        if (i == 'A')
            anton++;
        else
            danik++;
    }

    if (anton > danik)
    {
        return "Anton";
    }
    else if (anton == danik)
    {
        return "Friendship";
    }

    return "Danik";
}

int main()
{
    int n;
    string matches;

    cin >> n;
    cin >> matches;

    cout << winner(matches) << endl;
}