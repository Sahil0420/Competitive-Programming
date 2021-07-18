# def viralAd(n):
# 	days = n
# 	sent  =5//2
# 	sum1=sent
# 	while days!=1 :
# 		sent=(sent*3)//2
# 		sum1+=sent
# 		days-=1
# 	return sum1

# t = int(input())
# print(f"Number of cases : {t}")
# while t:
# 	n = int(input())
# 	print(viralAd(n))
# 	t-=1

# Circular Array rotation
nums = list(map(int,input().strip().split()))
k = int(input())
q = list(map(int,input().strip().split()))
for i in q:
	ans = nums[((len(nums)%k)+i)%len(nums)]
	print(ans)