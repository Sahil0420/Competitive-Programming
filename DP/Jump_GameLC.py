class Solution:
	def __init__(self):
		pass
	def canJump(self,nums):
		n = len(nums)
		last_ptr = n-1
		for i in range(n-2,-1,-1):
			if (i+nums[i]>=last_ptr):
				last_ptr = i
		if last_ptr==0:
			return True
		return False

	# def canJump2(self,nums):
	# 	n = len(nums)
	# 	count=0
	# 	if nums[0]<n-1:
	# 		last_ptr = n-1
	# 		for i in range(n-2,-1,-1):
	# 			if i<nums[i]:
	# 				if (i+nums[i]>=last_ptr):
	# 					count += 1
	# 					last_ptr = i
	# 	else:
	# 		count+=1

	# 	return count
''' __________________________________main________________________________________'''
nums = [2,3,1,1,4]
sol = Solution()
print(sol.canJump(nums))
nums = [2,3,1]
print(sol.canJump2(nums))
