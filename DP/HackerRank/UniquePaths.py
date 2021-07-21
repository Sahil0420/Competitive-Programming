from math import factorial


def fact(n):
    if n==0 or n==1:
        return 1
    return n*(fact(n-1))
class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        dp=[[0]*n]*n
        print(dp)