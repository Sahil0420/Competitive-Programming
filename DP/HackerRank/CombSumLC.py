#TABULATION APPROACH
def combinationSum4(N:list, T: int) -> int:
	dp = [0] * (T + 1)
	dp[0] = 1
	for i in range(1, T+1):
	    for num in N:
	        if num <= i: dp[i] += dp[i-num]
	print(dp[T])

#Recursive approach DP
def combSum(nums,tar,dp):
	if tar<0:
		return 0
	if tar==0:
		return 1

	if dp[tar]!=-1:
		return dp[tar]

	ans=0
	for i in range(len(nums)):
		ans+=combSum(nums, tar-nums[i],dp)
	dp[tar]=ans
	return dp[tar]


inps = list(map(int,input().strip().split()))
t=int(input())


combinationSum4(inps,t)
dp=[-1]*(t+1)
print(combSum(inps, t ,dp))
