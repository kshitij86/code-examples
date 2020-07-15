k, n, w = list(map(int, input().split()))

tot = 0
for i in range(1, w+1):
    tot += i*k

bo = tot - n 
print(0) if bo <= 0 else print(bo)
