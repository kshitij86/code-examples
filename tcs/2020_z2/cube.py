from math import sqrt, floor

n = int(input())
ls = list()

for i in range(n):
    ls.append(input())

nod = 0



for j in range(n):
    for k in range(n):
        if ls[j][k] == 'D': nod += 1

res = floor(sqrt(nod) - 1)

print(res + 1)