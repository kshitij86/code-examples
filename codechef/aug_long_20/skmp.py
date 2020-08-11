def skmp(a, b):
    if(b is ""):
        print(sorted(a))

    l1 = [0] * 26
    l2 = [0] * 26

    for i in range(len(a)):
        l1[ord(a[i]) - ord('a')] += 1
    
    for i in range(len(b)):
        l2[ord(b[i]) - ord('a')] += 1

    for i in range(26):
        l1[i] -= l2[i]
    

    st = ""
    for i in range(26):
        for j in range(l1[i]):
            st += chr(i+97)
    
    # print(st)

    i = 0
    temp  = st + b
    for i in range(0, len(st)):
        if st[i] >= b[0]:
            if(st[0: i] + b + st[i:] < temp):
                temp = st[0: i] + b + st[i:]
    
    print(temp)

n = int(input())
while n > 0:
    a = input()
    b = input()
    skmp(a, b)
    n -= 1