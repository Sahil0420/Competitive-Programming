import re
def extractInts(string):
    n=len(string)
    tillNow=""
    for i in range(n):
        if(ord(string[i]) - ord('0')>=0 and ord(string[i])-ord('0')<=9):
            tillNow+=string[i]
    else:
        if(len(tillNow)>0):
            print(int(tillNow))
            tillNow=""

n=input("Enter a string : ")
extractInts(n)
print()

match = re.compile(r'\d')
mn = match.findall(n)

for x in mn: print(x,end='')