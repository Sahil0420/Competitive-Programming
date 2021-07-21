def uniquePaths(m:int, n:int )->int:
	dp=[[0]*n]*m
	print(dp)

uniquePaths(4,3)

def longestSubstring(s:str):
	ans,l='',-1
	for char in s:
		if char not in ans:
			ans+=char
			if l<len(ans):
				l=len(ans)
		else:
			ans=''
			ans+=char
	return(l) 	

print(longestSubstring("abcabcbb"))
print(longestSubstring("aab"))
print(longestSubstring("dvfd"))
print(longestSubstring("pwwkew"))

nums = [0,0,1,1,1,2,2,3,3,4]
a=sorted(nums)
