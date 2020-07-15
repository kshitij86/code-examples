x = input()
x = x.rstrip()

y = ""

for i in x:
    if i == " ":
        y += "%20"
    else:
        y += i

print(y)
