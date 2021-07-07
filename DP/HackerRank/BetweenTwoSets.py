""" 	There will be two arrays of integers. Determine all integers that satisfy the following two conditions:
		The elements of the first array are all factors of the integer being considered
		The integer being considered is a factor of all elements of the second array 		
		TEST CASE = 2 4 
					16 32 96
"""



				# SOLUTION 
'''arr = list(map(int,input().strip().split()))
brr = list(map(int,input().strip().split()))

ans=0
for x in range(1,101):
	if all(x%i==0 for i in arr) and all(i%x==0 for i in brr):
		# print(x)
		ans+=1
print(ans)'''


"""
		Two children, Lily and Ron, want to share a chocolate bar. Each of the squares has an integer on it.
		Lily decides to share a contiguous segment of the bar selected such that:

	    -> The length of the segment matches Ron's birth month, and,
	   	-> The sum of the integers on the squares is equal to his birth day.
"""

				# SOLUTION

def sumL(a:list):
	s=0
	for x in a:
		s+=x
	return s

def birthday(chocolate, m , d):
	count=0
	for i in range(m,len(chocolate)+1):
		if sumL(chocolate[i-m:i])==d:
			count+=1
	return count

chocolate = list(map(int,input().strip().split()))
d = int(input())
m= int(input())

print(birthday(chocolate, m, d))