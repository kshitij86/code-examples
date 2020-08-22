string = input()

def fun_p(string):
	size = len(string)
	if size == 1:
		return True
	for i in range(int(size/2)):
		if string[i] != string[-i-1]:
			return False
	return True

def fun_s(string):
	for a in range(1, len(string) - 2):
		if fun_p(string[:a]):
			for b in range(a+1,len(string)):
				if fun_p(string[a:b]) and fun_p(string[b:]):
					print(string[:a])
					print(string[a:b])
					print(string[b:])
					return
	print("Impossible")

fun_s(string)