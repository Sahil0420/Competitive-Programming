import math


def main():
  nums = list(map(int, input().strip().split()))
  n = len(nums)
  answer = [1]*n
  prefix = 1
  for i in range(n):
    answer[i] = prefix
    prefix*=nums[i]
  
  postfix =1
  for i in reversed(range(n)):
    answer[i] *= postfix
    postfix *= nums[i]
  print(answer)

if __name__ == '__main__':
  main()
