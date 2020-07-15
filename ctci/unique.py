x = input()

ar = [0] * 26
flag = True
for i in x:
    ar[ord(i) - ord('a')] += 1
    if ar[ord(i) - ord('a')] > 1:
        flag = False
        break

print("YES") if flag is True else print("NO")
