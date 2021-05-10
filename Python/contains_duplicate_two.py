def contains_duplicate(nums, k):
	seen = {}
	right = 0
	while right < len(nums):
		if nums[right] in seen:
			if abs(right - seen[nums[right]] ) <= k:
				return True

		seen[nums[right]] = right
		right+=1
	print(seen)
	return False


def main():
  for _ in range(int(input())):
    nums = list(map(int, input().strip().split()))
    k = int(input())
    print(contains_duplicate(nums, k))


if __name__ == '__main__':
  main()
