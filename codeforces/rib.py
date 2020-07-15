n, a, b, c = list(map(int, input().split()))

dp = [0] * (n+1)
dp[0] = 0
for i in range(1, n+1):
    x, y, z = [-1] * 3

    if i >= a:
       x =  dp[i-a]
    if i >= b:
        y = dp[i-b]
    if i >= c:
        z = dp[i-c]
    
    if [x,y,z] == [-1] * 3:
        dp[i] = -1
    else:
        dp[i] = max(x, y, z) + 1

print(dp[n])
         
