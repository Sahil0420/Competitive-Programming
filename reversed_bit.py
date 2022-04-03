def solve(x):
	num = format(x , '032')
	return int(num[::-1],2)

def solve2(x):
	n = x & 0xFFFFFFFF
	n = bin(x)[2:].zfill(32)
	n = n[::-1]
	return int(n,2)

def main():
	num = int(input())
	print(solve(num))
	print(solve2(num))

if __name__ == '__main__':
	main()