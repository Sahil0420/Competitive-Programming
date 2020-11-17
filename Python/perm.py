def permute(lst):
	if(len(lst)==0):
		return []

	if(len(lst) == 1):
		return [lst]

	l = []

	for i in range(len(lst)):
		m = lst[i]
		remList = lst[:i] + lst[i+1:]
		
		for p in permute(remList):
			l.append([m]+p)

	return l 

# num = list(map(int , input().strip().split()))
num = "abc"
for i in permute(list(num)):
	print(i)

