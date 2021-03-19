def longestCommonPrefix(strs):
	ans = []
	mini = min(strs , key=len)
	for i in range(len(mini)):
		for j in strs:
			if mini[i]!=j[i]:
				return "".join(ans)
		else:
			ans.append(mini[i])

	return "".join(ans)

def main():
	for _ in range(int(input())):
		strs = list(map(str , input().strip().split()))
		print("answer is " , longestCommonPrefix(strs))

if __name__ == '__main__':
	main()