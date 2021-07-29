#______________________________MEMOIZATION_____________________________#
class Solution:
	def minCoins(self, coins:list , target : int , dp : list):
		if target==0:
			return 0
		ans = 10e5
		for i in range(len(coins)):
			if target-coins[i]>=0:
				subAns = 0
				if dp[target-coins[i]]!=-1:
					subAns = dp[target-coins[i]]
				else:
					subAns = self.minCoins(coins,target-coins[i],dp)
				if subAns + 1 < ans:
					ans = subAns+1
		return ans

"""PURE RECURSION"""
	# def minCoins2(self,coins,target):
	# 	if target == 0 :
	# 		return 0
	# 	ans = 10e5
	# 	for i in range(len(coins)):
	# 		if target-coins[i]>=0:
	# 			subAns = self.minCoins2(coins, target-coins[i])
	# 			if subAns+1 < ans:
	# 				ans = subAns+1
	# 	return ans


coins = [8,1,20]
target = 21
dp=[-1]*100
dp[0]=0
sol = Solution()
ans = sol.minCoins(coins, target, dp)
print(f"Minimum coins required are : {ans}")

ans = sol.minCoins2(coins, target)
print(f"Minimum coins required are : {ans}")


'''THIS SOLUTION IS NOT FOR FINDING THE MINIMUM COINS BUT THIS IS FOR FINDING THE NUMBER OF WAYS YOU MAKE THE TARGET MONEY USING GIVEN DENOMINATION'''
#_________________________________________SUMEET MALIK'S SOLUTION_______________________________________________________ : 
# arr = list(map(int , input('Enter input in one line : ').strip().split()))
# print(arr)

# amt = int(input("Enter the amount "))
# print(amt)

# dp = [0]*(amt+1)
# dp[0] = 1
# for i in range(len(arr)):
# 	for j in range(arr[i],len(dp)):
# 		dp[j] += dp[j - arr[i]]

# print(dp)
# print(dp[amt])

