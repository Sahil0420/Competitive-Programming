def combination_sum(candidates , target):
	ans = []
	def solve(i , target ,current):
		if target == 0:
			ans.append(list(current))
			return
		for c in range(i , len(candidates)):
			if target < candidates[c]:
				continue

			current.append(candidates[c])
			solve(c , target - candidates[c] , current)
			current.pop()

	solve(0 , target , [])
	return ans

def main():
	for _ in range(int(input())):
		candidates = list(map(int , input().strip().split()))
		target = int(input())
		print(combination_sum(candidates , target))

if __name__ == '__main__':
	main()