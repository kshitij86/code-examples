x = list(map(int, input().split()))

def ncs(x, n):
    if n == 1:
        return x[0]
    elif n == 2:
        return max(x[0], x[1])
    
    else:
        # Not including the last one and then including it but ignoring consecutive
        return max(ncs(x, n-1), ncs(x, n-2) + x[n-1])

print(ncs(x, len(x)))
