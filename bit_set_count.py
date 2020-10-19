def solve(n,k):
	ans=0
	binary = lambda x : bin(x)[2:]
	for i in range(1,n+1):
		if binary(i).count('1')==k:
			print(i)
			ans+=1

	return ans


def main():
	n , k = map(int ,input().strip().split())
	print(solve(n,k))


if __name__ == '__main__':
	main()