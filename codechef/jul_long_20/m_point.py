t = int(input())

while t > 0:
    n = int(input())
    pts = []
    x_vals = dict()
    y_vals = dict()
    for i in range((4*n)-1):
        pts.append(list(map(int, input().split())))
    for i in pts:
        if i[0] in x_vals.keys():
            x_vals[i[0]] += 1
        else:
            x_vals[i[0]] = 1
    for j in pts:
        if j[1] in y_vals.keys():
            y_vals[j[1]] += 1
        else:
            y_vals[j[1]] = 1 
    
    for k,v in x_vals.items():
        if v % 2 != 0:
            print(k, end=" ")
        
    for k,v in y_vals.items():
        if v % 2 != 0:
            print(k, end=" ")

    t -= 1

# print(x_vals)
# print(y_vals)

