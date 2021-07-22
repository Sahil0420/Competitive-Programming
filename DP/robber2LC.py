'''
	You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed.
	All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one.
	Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.

	Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

	Example 1:

	Input: nums = [2,3,2]
	Output: 3
	Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.

'''
from collections import Counter

class Solution:
	def __init__(self):
		self.dp = [-1]*101

	def solve(self,nums,n):
		if n<0:
			return 0
		
		if n==0:
			return nums[0]

		inc = self.solve(nums,n-2) + nums[n]
		exc = self.solve(nums,n-1) +0

		return max(inc,exc)

	def solveTabSop(self,nums):
		curr = 0
		prev2  = 0
		prev = nums[0]

		for i in range(1,len(nums)):
			curr = max(prev2+nums[i],prev)
			prev2= prev
			prev = curr

		return prev

	def rob(self,nums):
		n=len(nums)
		if n==1: return nums[0]
		# return self.solve(nums,n-1)
		first = nums[0:n-1]
		last = nums[1::]
		return max(self.solveTabSop(first),self.solveTabSop(last))

nums = list(map(int , input().strip().split()))
print(nums)
sol = Solution()
print(sol.rob(nums))
n=len(nums)

# Sop = space optimized
# Tab = Tabulation

num = [1,2,3,4,5]
c = Counter(num)
print(c)