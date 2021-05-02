def solve(num):
	temp = num
	while temp > 0:
		div = temp%10
		if div==0:
			return False
		temp//=10
		if num%div!=0:
			return False
	return True

def self_dividing_number(left , right):
	return list(filter(solve , range(left ,right+1)))

def main():
	for _ in range(int(input())):
		left , right = map(int , input().strip().split())
		print(self_dividing_number(left , right))


if __name__ == '__main__':
	main()