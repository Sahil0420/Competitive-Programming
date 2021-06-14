'''
			You are given an integer array nums. You want to maximize the number of points
			you get by performing the following operation any number of times:

		    Pick any nums[i] and delete it to earn nums[i] points. Afterwards, you must delete every element equal to nums[i] - 1 
		    and every element equal to nums[i] + 1.

			Return the maximum number of points you can earn by applying the above operation some number of times.
'''
from collections import Counter

class Solution:
    def deleteAndEarn(self, nums:list) -> int:
        C = Counter(nums)
        result = 0
        for num, count in C.items():
            if num-1 in C:
                continue
			# since num-1 is not in C, we are at the beginning of sequence of consecutive numbers
			# solve the house robber problem till the next gap
            n0, n1 = 0, 0
            while num in C:
                n0, n1 = n1, max(n0+num*C[num], n1)
                num += 1
            result += n1
        return result

nums = [2,2,3,3,3,4]

sol = Solution() 
print(sol.deleteAndEarn(nums))