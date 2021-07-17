'''
	the first char remains unchanged
	for each subsequent character say x , consider a letter preceeding it say y
		.If y  precedes x in alphabet transfrom x to uppercase
		.if x precedes y in alphabet  transfrom x to lowercase
		.x==y remains unchanged
'''

def transform(s):
	ans=""
	ans+=s[0]
	for x in range(1,len(s)):
		if ord(s[x])==32:
			ans+=''
		if s[x-1]==' ':
			ans+=s[x]
			continue
		if ord(s[x])>ord(s[x-1]):
			ans+=s[x].upper()
		elif ord(s[x])==ord(s[x-1]) or ord(s[x])==ord(s[x-1])-32:
			ans+=s[x].upper()
		elif ord(s[x])<ord(s[x-1]):
			ans+=s[x].lower()
	return ans

t=int(input())
while(t):
	sentence = input("Enter the sentence : ")
	result = transform(sentence)
	print("Answer : ", result)
	t-=1
# print(ord('a') -ord('A'))