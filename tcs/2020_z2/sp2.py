dict_num2w = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]
list_vow = [2, 2, 1, 2, 2, 2, 1, 2, 2, 2]

size = int(input())
num_ip = list(map(int, input().strip().split()))

p_sum = 0
for i in range(size):
    for num in str(num_ip[i]):
        p_sum = p_sum + list_vow[int(num)]

bd_wong = 0
for i in range(size - 1):
    for j in range(i+1, size):
        if num_ip[i] + num_ip[j] == p_sum:
            bd_wong += 1

total = dict_num2w[bd_wong] 
print(total) if bd_wong <= 100 else print("greater 100")