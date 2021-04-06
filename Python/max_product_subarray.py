def solve(nums):
	best = 1
	prod_neg = nums[0]
	prod_pos = nums[0]
	for i in range(1,len(nums)-1):
		prod_pos = max(prod_pos , prod_pos*nums[i])
		prod_neg = min(prod_neg , prod_neg*nums[i])
		print(prod_neg , prod_pos)

		best = max(best , prod_pos)
	return best

def main():
	nums = list(map(int , input().strip().split()))
	print(solve(nums))

if __name__ == '__main__':
	main()