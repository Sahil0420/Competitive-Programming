from tabulate import tabulate
class Graph:
	def __init__(self):
		self.graph = {}

	def addEdge(self,u,v,directed=False):
		if u in self.graph:
			self.graph[u].append(v)
		else:
			self.graph[u] = [v]

		if not directed:
			if v in self.graph:
				self.graph[v].append(u)
			else:
				self.graph[v] = [u]
	
	def pritnAdjList(self):
		for i in self.graph:
			print(i,end=" --> |")
			for j in self.graph[i]:
				print(j,end=' | ')
			print()

	def bfs(self,ans,visited , node):
		q = []
		q.append(node)

		while(len(q)):
			frontNode = q[0]
			q.pop(0)

			ans.append(frontNode)
			for i in self.graph[frontNode]:
				if i not in visited:
					q.append(i)
					visited[i] = True


	def BFS(self,no_of_nodes): #no of nodes == vertex
		ans=[]
		visited={}

		for i in range(no_of_nodes):
			if i not in visited:
				visited[i] = False
			if not(visited[i]):
				self.bfs(ans , visited , i)
		return ans

n = int(input('Enter the number of nodes : '))
print(n)

m = int(input('Enter the number of edges : '))
print(m)

g = Graph()

for i in range(m):
	a = list(map(int, input().strip().split()))
	u,v  = a[0],a[1]
	g.addEdge(u, v)

g.pritnAdjList()
print(f'BFS OF the graph : ')
for i in g.BFS(n):
	print(i , end=' ')
print()


'''
5
6
0 1
1 2 
2 3 
3 1 
3 4 
0 4
'''