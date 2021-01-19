class Solution:
  def maxProfit(self, prices):
    n = len(prices)
    ans = 0
    left, right = 0, 1
    while right < n:
      profit = prices[right] - prices[left]
      if prices[left] < prices[right]:
        ans = max(profit, ans)
        right += 1
      else:
        left = right
        right += 1
    return ans	

def main():
  t = int(input())
  sol = Solution()
  for _ in range(t):
    prices = list(map(int, input().strip().split(',')))
    print(sol.maxProfit(prices))


if __name__ == '__main__':
  main()
