# Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i
# Example 1:
#
# Input: n = 2
# Output: [0,1,1]
# Explanation:
# 0 --> 0
# 1 --> 1
# 2 --> 10

class Solution():
    def __init__(self):
        pass
    # def countBits(self,n:int)->list:
    #     ans=[]
    #     for i in range(n+1):
    #         isum = 0 
    #         inum = i
    #         while inum!=0:
    #             isum += inum%2
    #             inum//=2
    #         ans.append(isum)
    #         return ans
    def countBits(self,num):
        dp=[0]
        for i in range(1,num+1):
            bits_count = dp[i//2]
            if (i&1) : bits_count+=1
            dp.append(bits_count)
        return dp


s = Solution()
print(s.countBits(5))