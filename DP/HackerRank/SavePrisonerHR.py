from collections import deque

# def saveThePrisoner(n, m, s):
#     # Write your code here
#     return 1+((m+s)-2)%n

# q = deque()

# inps = list(map(int,input().strip().split()))

# n=prisoners = inps[0]
# m=end = inps[1]
# s=st = inps[2]

# for x in range(s,n+1):
# 	q.append(x)

# for x in range(1,s):
# 	q.append(x)

# print(q)

# while m:
# 	a=q.popleft()
# 	m-=1
# 	q.append(a)

# print(q[-1])
# print((inps[1] + inps[2] - 2) % inps[0] + 1)

# # qw = []
# # qw.append(2)
# # qw.append(3)
# # qw.append(1)

# # print(qw)
# # del qw[0]
# # print(qw)

print("Enter data " ,end=':')
inps = list(map(int, input().strip().split()))
m=inps[1]
s=inps[2]
n=inps[0]

ans = ((s+m -1)%n) if (s+m-1)%n!=0 else n
print(ans)