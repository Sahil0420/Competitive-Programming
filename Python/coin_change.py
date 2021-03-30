def coin_change(coins, amount):
	if amount==0:
		return 0

	dp={}
	def solve(amount, coins):
		if amount == 0: return 0
		if amount < 0 : return float('inf')
		if amount in dp :
			return dp[amount]
		dp[amount] = float('inf')
		for i in coins:
			dp[amount] = min(dp[amount], solve(amount-i, coins)+1)
		return dp[amount]

	ans = solve(amount, coins)
	return ans if ans < float('inf') else -1


def main():
  coins = list(map(int, input().strip().split()))
  amount = int(input())
  ans = coin_change(coins, amount)
  print(ans)


if __name__ == '__main__':
  main()
