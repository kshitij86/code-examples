#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    double x;
    while (test--)
    {
        cin >> x;
        cout << (int)log2((double)x) + 1 << endl;
    }
}