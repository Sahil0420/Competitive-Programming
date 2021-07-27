'''
You are given an array arr of positive integers. You are also given the array queries where queries[i] = [lefti, righti].

For each query i compute the XOR of elements from lefti to righti (that is, arr[lefti] XOR arr[lefti + 1] XOR ... XOR arr[righti] ).

Return an array answer where answer[i] is the answer to the ith query.

 

Example 1:

Input: arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]
Output: [2,7,14,8] 
Explanation: 
The binary representation of the elements in the array are:
1 = 0001 
3 = 0011 
4 = 0100 
8 = 1000 
The XOR values for queries are:
[0,1] = 1 xor 3 = 2 
[1,2] = 3 xor 4 = 7 
[0,3] = 1 xor 3 xor 4 xor 8 = 14 
[3,3] = 8

'''
class Solution:
	def xorQueries(self ,arr : list , queries : list)->int:
		self.ans=[]
		for x in queries:
			temp=[]
			temp.append(arr[x[0]]^arr[x[1]])
			self.ans.append(temp)
		return self.ans

arr = list(map(int,input().strip().split()))
queries =[]

n=int(input("Enter the number of queries : "))
print(n)
for x in range(n):
	temp=list(map(int , input().strip().split()))
	queries.append(temp)
print(queries)

out =[]
for i in range(1,len(arr)):
	arr[i] = arr[i]^arr[i-1]
print("Cumulative xor : ",arr) 	

for q in queries:
	left = q[0]
	right = q[1]
	if left==0:
		res = arr[right]
	else:
		left_arr=arr[left - 1]
		print(arr)
		right_arr =arr[right]
		# print(right_arr)

		res = left_arr ^ right_arr
	out.append(res)
print(out)