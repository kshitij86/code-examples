from math import factorial

"""
Permutation = n!
No. Of groups= n!(1 + 1/2 + ... + 1/n)
"""

n = int(input())
cars = list(map(int, input().split()))

res = 0
for i in range(1, n+1):
    res += (1/i)

print(factorial(n) * (res))