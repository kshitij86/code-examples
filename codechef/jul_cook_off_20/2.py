def subarrayBitwiseOR(A, n): 
	res = set() 
	pre = {0} 

	for x in A: 
		pre = {x | y for y in pre} | {x} 
		res |= pre 
	
	return len(res) == (n * (n+1))/2
  
  
test = int(input())

while(test > 0):
	n = int(input())
	A = list(map(int, input().split()))
	if(subarrayBitwiseOR(A, n)):
		print("YES")
	else:
		print("NO")
	test -= 1
  
