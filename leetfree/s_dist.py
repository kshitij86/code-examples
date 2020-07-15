x = list(map(int, input().split()))
x = sorted(x)

minx = 1000000
for i in range(len(x)-1):
    if abs(x[i] - x[i-1]) < minx:
        minx = abs(x[i] - x[i-1])

print(minx)
 
