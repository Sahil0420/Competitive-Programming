from tabulate import tabulate
def isPalin(string,l,r):
	if l>=r:
		return True

	if string[l] != string[r]:
		return False

	return isPalin(string, l+1, r-1)

def powerSet(string  , idx , curr):
	if (idx==len(string)):
		print(curr)
		return

	powerSet(string, idx+1, curr+string[idx])
	powerSet(string, idx+1, curr)

def subSets(string):
	size = len(string)
	subsets = 1<<size
	allsubset=[]
	for subsetmask in range(subsets):
		subset=[]
		for i in range(size):
			if (subsetmask &(1<<i)):
				subset.append(string[i])
		allsubset.append(subset)
	print(tabulate(allsubset))

def swap(s,l,i):
	s = list(s)
	s[l],s[i] = s[l],s[i]
	s = ''.join(s)
	return s

def permute(string , l , r):
	if l==r:
		print(' '.join(string))
	for i in range(l,r+1):
		 string[l],string[i] = string[i],string[l]
		 permute(string, l+1 , r)
		 string[l],string[i] = string[i],string[l]

T=int(input())
while T>0:
	s=input()
	print(s,'\t',isPalin(s,0,len(s)-1))
	T-=1
print()

T=int(input())
while T>0:
	s=input()
	curr=''
	# powerSet(s,0,curr)	
	# subSets(s)
	permute(list(s), 0, len(s)-1)
	T-=1
