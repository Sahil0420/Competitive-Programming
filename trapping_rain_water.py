class Solution:
	def trap(self , heights)->int:
		left , right = 0 , len(heights)-1
		first , second = 0,1
		while heights[second] >= heights[first]:
			first+=1
			second+=1
		left = first
		first , second = right ,right-1
		while heights[first] <= heights[second]:
			first-=1
			second-=1
		right = first
		first , second = left , left+1
		ans = 0
		for _ in range(left, right):
			while heights[second] < heights[first]:
				second+=1
				if second == right or first==right:
					first +=1
					second=first+1
			print(first , second)
			max_height = min(heights[first] , heights[second])
			for i in range(first+1 , second):
				actual_height = max_height-heights[i]
				ans+=actual_height
			first = second
			second+=1

		return ans


def main():
	sol = Solution()
	for _ in range(int(input())):
		heights = list(map(int , input().strip().split()))
		print(*heights)
		sol.trap(heights)

if __name__ == '__main__':
	main()