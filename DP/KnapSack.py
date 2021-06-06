import numpy as np
global dp
dp = np.full((500,500),-1)
# print(dp)

def func(ind:int , wt_left:int , wt:list , val:list):
    if (ind < 0) : return 0
    if wt_left == 0 : return 0
    # Didn't Choose an item
    if(dp[ind][wt_left] != -1):
        return dp[ind][wt_left]
    ans = func(ind-1,wt_left,wt,val)
    if wt_left-wt[ind] >= 0 :
    #chosed an item
        dp[ind][wt_left]=max(ans,func(ind-1,wt_left-wt[ind],wt,val)+val[ind])
    ans=dp[ind][wt_left]
    return ans

n = int(input('Enter the number of items : '))
m = int(input('Enter the weight capacity of bag : '))

wt=[]
val=[]

for i in range(n):
    wt.append(int(input(f"weight of item {i+1} : ")))
    val.append(int(input(f"price of item {i+1} : ")))

for x , y in zip(wt,val):
    print("\n",x,y,end=" ")

print(func(n-1,m,wt,val))
# print(dp)

