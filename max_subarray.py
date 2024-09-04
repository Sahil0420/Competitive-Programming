def solve(nums):
	best , summ = 0,nums[0]
	for i in range(1,len(nums)):
		summ =max(nums[i] , summ+nums[i])
		best = max(best  , summ)

	return best


def main():
	nums = list(map(int , input().strip().split()))
	print(solve(nums))

if __name__ == '__main__':
	main()