import math
#Reverse Integer

class Solution:
	def __init__(self):
		pass
	def revInt(self, x : int):
		self.limitup = (math.pow(2,31)-1)
		self.limitdn = (math.pow(2,-31)-1)
		flag = 0
		if x<0 : 
			flag = 1
			x = abs(x)
		rev=0
		while x!=0:
			rev = rev*10 + x%10
			x//=10
		if(rev>self.limitdn and rev<self.limitup):
			if flag ==0:
				return(rev)
			else:
				return(rev-rev*2)
		else:
			return 0

s= Solution()
ans = s.revInt(122423456)
print(ans)
limitup = (math.pow(2,31)-1)

num = -462524234
n = abs(num)
if (int(str(n)[::-1]))<(math.pow(2,31)-1):
	if num<0:
		num=str(num)
		flag = num[0]
		num = int(flag+num[:0:-1])
		print(num)
	else:
		print(int(str(num)[::-1]))
else:
	print(0)

a=int(input())
b=int(input())
sign = [1,0][a>b]
print(sign)