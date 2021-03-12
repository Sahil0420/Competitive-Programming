class Solution:
  def two_sum(self, nums, target):
    hashmap = {}
    for i, num in enumerate(nums):
      print(hashmap)
      comp = target - num
      if comp in hashmap:
        return [hashmap[comp], i]
      hashmap[num] = i
    return []


def main():
  arr = list(map(int, input().strip().split()))
  target = int(input())
  sol = Solution()
  print(sol.two_sum(arr, target))


if __name__ == '__main__':
  main()
