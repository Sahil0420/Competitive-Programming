def combination(n,k):
	ans = []
	if k==1:
		return [[i] for i in range(1,n+1)]

	def solve(idx, curr):
		if len(curr)==k:
			ans.append(curr[:])
			return

		for i in range(idx,n+1):
			curr.append(i)
			solve(i+1 , curr)
			curr.pop()

	solve(1 , [])
	return ans

def permutations(nums):
	ans = []
	def dfs(inps , curr):
		if len(curr) == len(nums):
			ans.append(curr[:])
			return

		for i in range(len(inps)):
			curr.append(inps[i])
			dfs(inps[:i]+inps[i+1:] , curr)
			curr.pop()

	dfs(nums , [])
	return ans

def main():
	for _ in range(int(input())):
		# n,k = map(int , input().strip().split())
		# print(n,k)
		# ans = combination(n,k)
		# print(len(ans) , ans)
		"""permutations"""
		nums = list(map(int , input().strip().split()))
		print(permutations(nums))


if __name__ == '__main__':
	main()