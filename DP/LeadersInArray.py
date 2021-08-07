class Solution:
	def leaders(self,arr,n):
		self.leader = []
		for i in range(n):
			key = arr[i]
			mila = False
			for j in range(i+1,len(arr)):
				if (arr[j] > key):
					mila = True
			if(not mila) : 
				self.leader.append(arr[i])
		print(self.leader)


A = list(map(int , input().strip().split()))
print(f"INPUT = {A}")

sol = Solution()
sol.leaders(A,len(A))

'''
Input:n = 6 A[] = {16,17,4,3,5,2}
Output: 17 5 2
Explanation: The first leader is 17 
as it is greater than all the elements
to its right.  Similarly, the next 
leader is 5. The right most element 
is always a leader so it is also 
included.
'''