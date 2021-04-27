def solve(nums , target):
	left , right = 0,len(nums)-1
	for i in range(len(nums)-1):
		for j in range(i+1 , len(nums)):
			if nums[i]+nums[j] == target:
				return [i,j]

def longest_consecutive_sequence(nums):
	h = set(nums)
	ans = []

	for num in nums:
		if num-1 not in h:
			curr = num
			curr_seq = [curr]

			while curr + 1 in h:
				curr += 1
				curr_seq.append(curr)
				if len(curr_seq) > len(ans):
					ans = curr_seq
	return ans

def non_repeating(string):
	h = dict()
	for i in string:
		if i in h:
			h[i]+=1
		else:
			h[i] = 0

	for i in h:
		if h[i]==0:
			return i

def isBalanced(string):
	mapper = {'(': -1 , ')' : 1}
	stack = []
	for i in string:
		if i=='(':
			stack.append(mapper[i])
		elif i == ')':
			if not stack:
				return False
			stack.pop()

	return not stack

def bubblesort(nums):
	n = len(nums)
	for i in range(n):
		for j in range(i,n):
			if nums[i] > nums[j]:
				nums[i] , nums[j] = nums[j] , nums[i]
	return nums

def binary_search(nums , target):
	n = len(nums)
	if n==0:
		return -1

	left , right = 0 , n-1
	while left < right:
		if nums[left]==target: return left
		if nums[right] == target : return right
		mid = (left+right)//2
		if nums[mid] == target : return mid
		if nums[mid] > target:
			right = mid-1
		else:
			left = mid+1

	return -1

def searialize():
	

def main():
	for _ in range(int(input())):
		nums = list(map(int , input().strip().split()))
		target = int(input())
		print(solve(nums , target))
		print(longest_consecutive_sequence(nums))
		print(non_repeating(input()))
		print(isBalanced(input()))
		print(isBalanced(input()))
		nums = list(map(int , input().strip().split()))
		nums = bubblesort(nums)
		print(nums)
		print(binary_search(nums ,2))
if __name__ == '__main__':
	main()