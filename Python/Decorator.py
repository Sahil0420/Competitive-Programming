def func(s):
    def func_1():
        print("func_1 started")
        s()
        print("func_1 ended")
    return func_1
@func
def hello():
    print("HELO RUNING" )

# hello = func(hello)
hello()

n=int(input())
a=[]
for x in range(n):
    t=list(map(int,input().strip().split()))
    a.append(t)

print(a)
sum=0
for x in a:
    for j in x:
        sum+=j
print(sum)

