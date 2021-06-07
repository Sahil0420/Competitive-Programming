'''
	https://leetcode.com/problems/house-robber/

	You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed,
	the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and
	it will automatically contact the police if two adjacent houses were broken into on the same night.

	Given an integer array nums representing the amount of money of each house, return the maximum amount of money 
	you can rob tonight without alerting the police. 

	Example 1:

	Input: nums = [1,2,3,1]
	Output: 4
	Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
	Total amount you can rob = 1 + 3 = 4.

	Example 2:

	Input: nums = [2,7,9,3,1]
	Output: 12
	Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
	Total amount you can rob = 2 + 9 + 1 = 12.
'''

class Solution:
	def __init__(self):
		self.dp=[-1]*101

	def solve(self,nums,n):
		if n==0:
			return nums[0]
		if n<0:
			return 0

		if self.dp[n]!=-1:
			return self.dp[n]

		inc = self.solve(nums,n-2)+nums[n]
		exc = self.solve(nums, n-1)+0

		self.dp[n]=max(inc,exc)

		return self.dp[n]


	# def solveTab(self,nums,n):
	# 	dp = [0]*(n+1)
	# 	dp[0] = nums[0]
	# 	for i in range(1,len(nums)):
	# 	    incl = dp[i-2]+nums[i]
	# 	    excl = dp[i-1]+0
	# 	    # print(i,incl)
	# 	    # print(i,excl)
	# 	    dp[i] =  max(incl , excl)
	# 	return dp[n]

	def rob(self,nums:list):
		n=len(nums)
		return self.solve(nums, n-1)

def rob(nums:list):
	if len(nums) < 2:
		return max(nums)
	curr_rob = 0  # maximum rob value from the leftmost house to current house (including)
	prev2rob = 0   # maximum rob value from the leftmost house to neighbor's neighbor
	prevrob = nums[0]  # maximum rob value from the leftmost house to neighbor

	for i in range(1, len(nums)):
		curr_rob = max(prevrob, prev2rob+nums[i])  # dynamic programming
		prev2rob = prevrob
		prevrob = curr_rob
		# print(i,curr_rob,nei_nei_rob,nei_rob)
	print (prevrob)

nums=list(map(int,input().strip().split()))
sol = Solution()
print(sol.rob(nums))
rob(nums)