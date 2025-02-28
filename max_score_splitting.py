def maxScore(s):
	ans = 0
	for i in range(1,len(s)):
		a,b = list(s[:i]), list(s[i:])
		ans = max(ans , a.count('0') + b.count('1'))
	return ans

def main():
	for _ in range(int(input())):
		s = input()
		print(maxScore(s))

if __name__ == '__main__':
	main()