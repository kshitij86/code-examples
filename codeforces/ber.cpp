#include <bits/stdc++.h>
using namespace std;

/*input
code 
edoc
*/

string berland(string s, string t)
{
    if (s.length() != t.length())
    {
        return "NO";
    }

    for (int i = 0, j = s.length() - 1; i < s.length(); i++, j--)
    {
        if (s[i] != t[j])
        {
            return "NO";
        }
    }
    return "YES";
}

int main()
{
    string s, t;
    cin >> s;
    cin >> t;

    cout << berland(s, t) << endl;

    return 0;
}
