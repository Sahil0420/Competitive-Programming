def solve(n):
	ans = [0]
	for i in range(1,n+1):
		ans.append(bin(i).count('1'))
	return ans 

def main():
	arr = list(map(int , input().strip().split()))
	for i in arr:
		print(i , *solve(i))

if __name__ == '__main__':
	main()