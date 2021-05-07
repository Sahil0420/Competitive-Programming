class Solution:
	def maxArea(self, height):
		n = len(height)
		left , right = 0 , n-1
		ans = 0
		while left < right:
			length = right - left
			breadth = min(height[left] , height[right])
			area = length * breadth
			ans = max(area , ans)
			if height[left] < height[right]:
				left+=1
			else:
				right-=1
		return ans

def main():
	height = list(map(int , input().strip().split()))
	print(*height)
	sol = Solution()
	print(sol.maxArea(height))

if __name__ == '__main__':
	main()