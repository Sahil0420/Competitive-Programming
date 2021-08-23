'''
Longest Increasign Subsequence 
examples : 10 9 2 5 3 7 101 18

2 5 7 101 - 4 

2 3 7 18 - 4
'''

class Solution:
	def __init__(self):
		self.dp = [-1]*100
	def lis(self , arr : list , i : int):
		if(self.dp[i]!=-1):
			return self.dp[i]
		ans = 1
		for j in range(i):
			if arr[i] > arr[j]:
				ans = max(ans,self.lis(arr,j)+1)
		self.dp[i] = ans
		return self.dp[i]

arr = list(map(int , input("Enter the number in one line : ").strip().split()))
print(arr)

sol = Solution()
for x in range(len(arr)):
	ans = (sol.lis(arr , x ))
print(ans)