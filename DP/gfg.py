class Solution:
    def unHappiness(self,A,n):
        #code here
        self.A = A
        happy=0
        for x in range(len(self.A)):
            if self.A[happy] > self.A[x]:
                happy = x
        self.res=[]
        for x in range(n):
            if x == happy: 
                self.res.append(-1)
            
            elif x>happy and self.A[x]<self.A[happy]:
                self.res.append(x-happy-1)
            
            elif x>happy and self.A[x]>self.A[happy]:
                self.res.append(happy-x+1)
            
            elif x<happy and self.A[x]>self.A[happy]:
                self.res.append(happy-x-1)
            
            elif x<happy and self.A[x]<self.A[happy]:
                self.res.append(x-happy-1)

        return self.res

t=int(input('Enter the test cases : '))
for _ in range(t):
    n=int(input("Enter the number of person : "))
    a=[]
    for x in range(n):
        a.append(int(input("")))
obj = Solution()
res = obj.unHappiness(a,n)
for i in res:
    print(i,end=' ')
print()

# 7
# 10 4 6 3 2 8 15