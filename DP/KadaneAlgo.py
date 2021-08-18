class Solution :
	def maxSubarraySum(self,arr,N):
		maxSum = -1e7
		currSum=0
		for i in range(N):
			currSum += arr[i]
			if (currSum > maxSum):
				maxSum = currSum

			if (currSum < 0):
				currSum = 0
		return maxSum

arr = list(map(int,input().strip().split()))
sol =Solution()
sum1 = sol.maxSubarraySum(arr,len(arr))
print(sum1)
