def unmatched_pairs(brides, grooms):
	r = 0
	m = 0

	for i in grooms:
		if i == "r":
			r += 1
		else:
			m += 1

	ctr = 0

	for j in brides:
		if i == "r":
			if r > 0:
				r -= 1
				ctr += 1
			else: break
		else:
			if m > 0:
				m -= 1
				ctr += 1
			else: break

	return ctr

n = int(input())
brides = input()
grooms = input()

print(n - unmatched_pairs(brides, grooms))