def jumping_on_clouds(c):
	n = len(c)
	def solve(c , i):
		if i==n-1:
			return 0
		if i>=n:
			return 0
		if c[i]==1:
			return solve(c , i+1)+1
		else:
			return solve(c,i+2)+1
		return min(solve(c,i+1)+1 , solve(c,i+2)+1)

	ans = solve(c,0)
	return ans

def main():
	t = int(input())
	for _ in range(t):
		clouds = list(map(int , input().strip().split()))
		print(clouds)
		print(jumping_on_clouds(clouds))

if __name__ == '__main__':
	main()