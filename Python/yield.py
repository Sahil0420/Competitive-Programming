import math
def Square(n:int):
	i=1
	while n :
		yield i*i
		i+=1
		n-=1

for i in Square(5):
	print(i,end=' ')
print()



def fibo(n):
	arr=[0,1]
	for a in range(2,n):
		arr.append(arr[a-1]+arr[a-2])
	return arr

def fibrec(n):
	if n==0 or  n==1:
		return n 
	else:
		return fibrec(n-1)+fibrec(n-2)


print("running")
for x in range(10):
	print(fibrec(x),end=' ')

def fibyield(n):
	a,b=0,1
	while n :
		yield a 
		a,b=a+b,a
		n-=1

print()
for i in fibyield(10): print(i,end=' ')

def eveyld(n:int):
	i=0 
	while i<=n:
		yield(i+2)
		i+=2

print()
print([i for i in eveyld(10)])

def primes():
	for i in range(8,100):
		if ( i%2 !=0 and i%3!=0 and i%5!=0 ):
			yield i


print(2,3,5,7,end=' ')
for x in primes(): print(x,end=' ')

p = [2,3,5]
n=6

if n<1:
	print(False)
for i in p:
	while n%i==0:
		n=n//i
	
if n!=1:
	print (False)
else:
	print(True)
