t = int(input())

while t > 0:
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))    
    print(a,b)
    
    if sorted(a) == sorted(b):
        print(0)
    else:
        x, y = dict(), dict()
        for i in a:
            if i in x.keys():
                x[i] += 1
            else:
                x[i] = 1    
        
        for i in b:
            if i in y.keys():
                y[i] += 1
            else:
                y[i] = 1    
        c, d = [], [] 
        
    t -= 1

