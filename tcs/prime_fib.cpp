#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vec;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

vec getPrimes(int n1, int n2)
{
    vec res;
    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            res.push_back(i);
        }
    }

    return res;
}

int con(int x, int y)
{
    int g = y;
    int ctr(0);
    while (g > 0)
    {
        g = g / 10;
        ctr++;
    }

    return (x * pow(10, ctr) + y);
}

vec makeCombos(vec prime)
{
    vec combos;
    for (int i = 0; i < prime.size(); i++)
    {
        for (int j = 0; j < prime.size(); j++)
        {
            int combo = con(prime[i], prime[j]);
            if (i != j)
                combos.push_back(combo);
        }
    }

    return combos;
}

void printVec(vec g)
{
    for (int i : g)
    {
        cout << i << " ";
    }
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vec primes = getPrimes(n1, n2);
    vec combos = makeCombos(primes);
    vec prime_2;

    for (int i : combos)
    {
        if (isPrime(i))
            prime_2.push_back(i);
    }

    long long mi = *min_element(prime_2.begin(), prime_2.end());
    long long ma = *max_element(prime_2.begin(), prime_2.end());
    int count = prime_2.size();

    // cout << count << endl;
    // printVec(prime_2);

    long long c;
    for (int i = 2; i < count; i++)
    {
        c = mi + ma;
        mi = ma;
        ma = c;
    }

    cout << c << endl;
}