def solve(nums):
	n =len(nums)
	for i in range(n):
		if i<0:
			nums[i] = 0
	ans = sum(nums) - (n*(n+1))//2
	return n+1 if ans==0 else ans  

def main():
  nums = list(map(int, input().strip().split()))
  print(solve(nums))

if __name__ == '__main__':
  main()
