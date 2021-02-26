def fac(n):
	if n==1:
		return 1
	return n*fac(n-1)

def fib(n):
	if n==1:
		return 1
	elif n==2:
		return 1
	return fib(n-1)+fib(n-2)

print(fac(5))

def power(a,b):
	if b==1:
		return a
	else:
		return (a*power(a,b-1))

for x in range(1,8):
	print(fib(x),end=" ")
print()

def Ap(a,d,n):
	i=1
	while i<=n:
		yield (a+(i-1)*d)
		i+=1

for x in range(0,5):
	a=int(input()) 
	print(f'2 raised to the power of {a} =',end='')
	print(power(2,a))

t1=int(input())
t2=int(input())
tn=int(input())
ap = Ap(t1,t2-t1,tn)
for x  in ap:
	print(x,end=' ') 