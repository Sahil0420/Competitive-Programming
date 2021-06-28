# class AdvancedArithmetic(object):
#     def divisorSum(n):
#         raise NotImplementedError

# class Calculator(AdvancedArithmetic):
#     def divisorSum(self, n):
#         self.a=0
#         for x in range(1,n):
#             if n%x==0:
#                 self.a+=x
#         self.a+=n
#         return self.a            


# n = int(input())
# my_calculator = Calculator()
# s = my_calculator.divisorSum(n)
# print("I implemented: " + type(my_calculator).__bases__[0].__name__)
# print(s)

# def isPrime(n):
#   if (n == 1):
#     return False
#   p=2
#   for x in range(p,n,p*p):
#     if (n % i == 0): return False;

#   return True;

# num=int(input())
# prime = [True for i in range(num+1)]
# p=2
# while(p*p <=num):
#     if(isPrime(p)):
#         for i in range(p*p , num+1 , p):
#             prime[i] = False
#     p+=1
# for x in range(len(prime)):
#     if prime[x]==True:
#         print(x)

# def GCD(a,b):
#     if a==b:
#         return a
#     if a==0:
#         return b
#     if b==0:
#         return a
#     if a>b:
#         return GCD(b,a-b)
#     else:
#         return GCD(a,b-a)
# def LCM(a,b):
#     l = a*b/GCD(a, b)
#     return int(l)
# def multiples(num , x=3, y=5):
#     r = (num-1)//x
#     s = (num-1)//y
#     l=LCM(x,y)
#     t = (num-1)//l

#     return ((x*r*(r+1)+y*s*(s+1)-l*t*(t+1)))>>1

# t=int(input())
# while t:
#     num=int(input())
#     print(multiples(num))
#     t-=1

# a=input()
# b=input()
# t=int(input())
# print(a,end=' ')
# print(b,end=' ')
# while(t):
#     c=a+b
#     print(c,end=' ')
#     a=b
#     b=c
#     t-=1

def count_substring(string, sub_string):
	ans=0
	for x in range(0,len(string)-len(sub_string)+1):
		if(sub_string == string[x:x+len(sub_string)]):
			ans+=1
	return ans

string = input().strip()
sub_string = input().strip()
count =count_substring(string, sub_string)
print(count)
