
def revnum(n):
	n=str(n)
	n = int(n[::-1])
	return n 

inp = list(map(int,input().strip().split()))
st  = inp[0]
en  = inp[1]
k   = inp[2]

ans =[]
for x in range(st , en+1):
	y = abs(revnum(x) -  x )
	y = y/k
	if y - int(y)==0 : 
		ans+=[y]
		
print(len(ans))