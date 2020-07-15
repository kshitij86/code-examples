n = int(input())

s = 1
e = n
fl = []
for i in range(int(n/2)):
    fl.append([s, e])
    s += 1
    e -= 1

print(fl) if len(fl) > 1 else print(fl[0])
