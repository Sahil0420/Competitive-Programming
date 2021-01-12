def solve(n):
	count=0
	while n>0:
		if n&1:
			count+=1
		n>>=1
	return count

def main():
	arr = list(map(int , input().strip().split()))
	for i in arr:
		print( bin(i)[2:], solve(i))

if __name__ == '__main__':
	main()