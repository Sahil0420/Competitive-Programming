from itertools import combinations
from itertools import permutations

"""
	GIVEN AN ARRAY OF INTEGERS AND A POSITIVE INTEGER k DETERMINE THE
	NUMBER OF (i,j) PAIRS WHERE i<j AND ar[i] + ar[j] IS DIVISIBLE BY K
"""
arr = list(map(int,input().strip().split()))
k = int(input())

a = combinations(arr,2)
y = [i for i in a if (i[0]+i[1])%k==0]
for i in y : print(i,end=" ")
print("\n")	
