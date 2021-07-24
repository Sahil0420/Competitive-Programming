# class Solution:
#     def __init__(self):
#         self.dp=[-1]*100
#     def fibo(self,num:int):
#         self.dp[0],self.dp[1]=0,1
#         for x in range(2,num+1):
#             self.dp[x] = self.dp[x-1] + self.dp[x-2]
#         return self.dp[num]


# s=Solution()
# print(s.fibo(4))
# print(s.fibo(2))
# print(s.fibo(3))



"""
        # https://leetcode.com/problems/n-th-tribonacci-number/
        The Tribonacci sequence Tn is defined as follows: 

        T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

        Given n, return the value of Tn.

        Input: n = 4
        Output: 4
        Explanation:
        T_3 = 0 + 1 + 1 = 2
        T_4 = 1 + 1 + 2 = 4
"""
class Solution():
    def tribonacci(self,num:int)->int:
        if num==0 :
            return num

        if num==1 or num==2:
            return 1

        dp=[-1]*(num+3)
        dp[0],dp[1],dp[2] = 0,0,1
        for i in range(3,num+3):
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3]
        return dp[num+1]

    def tribonacci2(self, n: int) -> int:
        a, b, c = 0, 1, 1
        for i in range(n): a, b, c = b, c, a + b + c
        return a

# s=Solution()
# t=int(input())
# while t:
#     a=int(input())
#     print(s.tribonacci(a))
#     print(s.tribonacci2(a))
#     t-=1



"""

        https://leetcode.com/problems/climbing-stairs/

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

"""
# class Solution:
#     def __init__(self):
#         self.dp = [-1]*100

#     def climbingstairs(self,n:int)->int:
#         if n==0:
#             return 1
#         if n<0:
#             return 0

#         if self.dp[n]!=-1:
#             return self.dp[n]

#         self.dp[n] = (self.climbingstairs(n-1)+self.climbingstairs(n-2))
#         return self.dp[n]

# ans  = Solution()
# print(ans.climbingstairs(3))

'''
    https://leetcode.com/problems/min-cost-climbing-stairs/

        You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.

        You can either start from the step with index 0, or the step with index 1.

        Return the minimum cost to reach the top of the floor.

         

        Example 1:

        Input: cost = [10,15,20]
        Output: 15
        Explanation: You will start at index 1.
        - Pay 15 and climb two steps to reach the top.
        The total cost is 15.
'''

# class Solution:
#     def __init__(self):
#         self.dp =[-1]*100
#     def Solve(self,cost,n):
#         if n==0:
#             return cost[0]
#         if n==1:
#             return cost[1]
#         if self.dp[n]!=-1:
#             return self.dp[n]
#         self.dp[n] = cost[n]+min(self.Solve(cost,n-1),self.Solve(cost,n-2))
#         return self.dp[n] 
#     def minCostOfClimbigStairs(self,cost:list[int])->int:
#         n = len(cost)
#         ans = min(self.Solve(cost,n-1) ,self.Solve(cost,n-2))
#         # ans = self.Solve(cost,n)
#         return ans

# minCost = Solution()
# cost =  list(map(int,input().strip().split()))
# print(cost)
# print(minCost.minCostOfClimbigStairs(cost))


'''
        https://leetcode.com/problems/valid-parentheses/

        Valid Parentheses
    
        Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

        An input string is valid if:

            Open brackets must be closed by the same type of brackets.
            Open brackets must be closed in the correct order.



        # class Solution:
        #     def __init__(self):
        #         self.dick = { '(':1 , ')':-1 , '[':2 , ']':-2 , '{':3 , '}':-3 }
        #     def isValid(self,s:str)->bool:
        #         stack =[]
        #         for i in s:
        #             if self.dick[i]>0:
        #                 stack.append(self.dick[i])
        #             else:
        #                 if len(stack) == 0 : return False
        #                 top = stack[-1]
        #                 stack.pop()
        #                 if (top+self.dick[i]!=0):
        #                     return False
        #         if len(stack)==0:
        #             return True

        class Solution:
            def isValid(self, s: str) -> bool:
                dic = {"(" : ")" ,"[" :"]","{" :"}"}
                stack = []
                if len(s) % 2 !=0:
                    return False
                for i in s:
                    if i in dic:
                        stack.append(i)
                    else:
                        if(len(stack) and dic[stack[-1]]==i):
                            del stack[-1]
                        else:
                            return False
                return stack == []

        a = list(map(str,input().strip().split()))
        sol = Solution()
        ans =sol.isValid(a)
        print(ans)
'''
