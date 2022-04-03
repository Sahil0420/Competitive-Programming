def remove_duplicates(nums):
	prev = nums[0]
	for i in range(1, len(nums)):
		if prev == nums[i]:
			nums[i] = 10000
		else:
			prev = nums[i]
	nums.sort()
	nums = list(filter(lambda x: x <= 100, nums))
	return prev

def removeElement(nums,val):
	nums[:] = list(filter(lambda x : x!=val , nums))
	return len(nums)

def main():
	'''
  for _ in range(int(input())):
    arr = list(map(int, input().strip().split()))
    n = remove_duplicates(arr)
    for i in range(n):
    	print(arr[i],end=' ')
    print()
	'''
	for _ in range(int(input())):
		nums = list(map(int , input().strip().split()))
		val = int(input())
		n = removeElement(nums,val)
		print(nums)

if __name__ == '__main__':
  main()
