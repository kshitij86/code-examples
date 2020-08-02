// WTF
#include <bits/stdc++.h>
using namespace std;

int peels(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return peels(n - 1) + 1;
}

int main()
{
    cout << peels(4);
}