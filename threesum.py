class Solution:
  def threeSum(self, nums):
    nums.sort()
    n = len(nums)
    ans = []
    for i in range(n-2):
      if (i > 0 and nums[i] == nums[i-1]):
        continue
      left, right = i+1, n-1
      while left < right:
        summ = nums[i] + nums[left] + nums[right]
        if summ < 0:
          left += 1
        elif summ > 0:
          right -= 1
        else:
          currsum = [nums[i], nums[left], nums[right]]
          ans.append(currsum)
          left += 1
          right -= 1
          while left < right and nums[left] == nums[left-1]:
            left += 1
          while left < right and nums[right] == nums[right-1]:
            right -= 1

    return ans

def main():
  nums = list(map(int, input().strip().split()))
  print(nums)
  sol = Solution()
  print(*sol.threeSum(nums))


if __name__ == '__main__':
  main()
