import numpy as np
global dp1 
# dp1=np.zeros(100)
# dp1[0]=1
# dp1[1]=1
def Catalan(n):
    if n<=1:
        return 1
    res=0
    for i in range(n):
        res+= Catalan(i)*Catalan(n-i-1)
        # dp1[i]=res
    return res


# second approch
def Catalan2(dp):
    dp[0]=1
    dp[1]=1
    for i in range(2,len(dp)):
        for j in range(0,i):
            dp[i] += dp[j] * dp[i-j-1]
    print(dp)

# print(dp[1])
for i in range((int(input('Enter a number : ')))+1):
    print(Catalan(i))

n=int(input("Enter the number : "))
dp = [0 for x in range(n+1)]
for x in range(Catalan2(dp)):
    print(x)
