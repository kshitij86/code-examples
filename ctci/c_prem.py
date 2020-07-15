x = input()
y = input()

ar = [0] * 26
for i in x:
    ar[ord(i) - ord('a')] += 1

for i in y:
    ar[ord(i) - ord('a')] -= 1

print("YES") if ar == [0] *26 else print("NO")
