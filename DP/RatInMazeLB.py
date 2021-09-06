def print2D(m):
	for x in m:
		for i in x:
			print(i,end=" ")
		print()

# def isSafe(newx:int , newy:int , visted , maze ):
# 	n=len(maze)
# 	if ((newx>=0 and newx<n) and (newy>=0 and newy<n) and (visted[newx][newy]!=1 and maze[newx][newy]==1)):
# 		return True
# 	else:
# 		return False

# def solve(x,y,maze,ans,x):
# 	pass

maze  = []
n=int(input())
for x in range(n):
	tmp = list(map(int , input().strip().split()))
	maze.append(tmp)

print2D(maze)
print(maze)

print("I".isupper())

'''
4
1 0 0 0
1 1 0 1
1 1 0 0 
0 1 1 1

'''