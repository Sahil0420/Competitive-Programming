def equalize_the_array(arr):
	ans = 0
	for i in arr:
		print(i , arr.count(i))
		ans = max(ans , arr.count(i))
	print(ans)

def main():
	n = int(input())
	arr = list(map(int , input().strip().split()))
	print(equalize_the_array(arr))

if __name__ == '__main__':
	main()