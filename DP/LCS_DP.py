
def lcsUtil(m,n,s1,s2,dp):
	if m==0 or n==0:
		return 0

	if dp[m][n]!=-1:
		return dp[m][n]

	if s1[m-1]==s2[n-1]:
		dp[m][n] = lcsUtil(m-1, n-1, s1, s2,dp)+1
		return dp[m][n]
	else:
		dp[m][n] = max(lcsUtil(m, n-1, s1, s2,dp),lcsUtil(m-1, n, s1, s2,dp)) 
		return dp[m][n]



def LCS(s1:str  , s2:str):
	m,n=len(s1),len(s2)
	dp=[[-1 for x in range(n+1)]for _ in range(m+1)]
	return lcsUtil(m,n,s1,s2,dp) 


inps = list(map(str,input().strip().split()))
str1 = inps[0]
str2 = inps[1]

ans=LCS(str1, str2)
print(ans)