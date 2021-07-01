'''
1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
abc

output = 9 

as a = 1 b = 3 c = 1
'''
h = list(map(int,input().strip().split()))
word=input().strip()

m=h[0]
for x in word:
	m = max(m,h[ord(x)-ord('a')])

print(m*len(word))