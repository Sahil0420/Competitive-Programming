def jump(tiles):
	n= len(tiles)
	smallest = [float('inf')]

	def solve(i=0 , jumps=0):
		if i==n-1:
			smallest[0] = min(smallest[0] , jumps)
			return

		max_jumps = tiles[i]
		max_reachable_index = min(i+max_jumps , n-1)
		for new_index in range(max_reachable_index , i , -1):
			solve(new_index , jumps+1)

	solve()
	return smallest[0]

def jump_optimal(nums):
	smallest = 0
	end , far = 0,0
	n= len(nums)

	for i in range(n-1):
		far = max(far , i+nums[i])

		if i==end:
			smallest+=1
			end = far

	return smallest

def main():
	for _ in range(int(input())):
		tiles = list(map(int , input().strip().split()))
		print(tiles)
		print(jump(tiles))
		print(jump_optimal(tiles))

if __name__ == '__main__':
	main()