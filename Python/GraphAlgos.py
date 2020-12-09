class Graph:
    def __init__(self,n_vertices,edges):
        self.data = [[] for _ in range(n_vertices)]
        for (v1,v2) in edges:
            self.data[v1].append(v2)
            self.data[v2].append(v1)

    def __repr__(self):
        result=''
        for i,nodes in enumerate(self.data):
            result+=str(i)+' : '+str(nodes)+'\n'
        return result 

class GraphMatrix:
    pass

"""
1. Create list visited with all nodes marked False
2. Create a list queue a single element the source 
3. Create a pointer i the with the value 0
4. Take the i-th element from the queue.
5. Insert the neighbors of the `queue[i]` into the queue, and mark them visited 
6. When there are no more elements left in the queue, exit the loop return the queue 
"""
def bfs(graph,source):      #bfs = breadth first search
    visited=[False]* len(graph.data)
    queue=[source]
    visited[source] = True
    # distance=[0]
    # parent=[]
    i=0
    while i<len(queue):
        current = queue[i]
        for v in graph.data[current]:
            if not visited[v]:
                queue.append(v)
                visited[v]=True
                # distance.append(distance[current]+1) #optional
                # parent.append(current) #optional
        i+=1
    return queue #distance ,parent #are optional  

"""
DEPTH - FIRST TRAVERSAL 
1. Create a stack with a single element : source and mark it as visited
2. Pop the last element in the stack, if  it is not visited then add its neighbors to the stack and mark them as visited 
3. Repeated till the stack is empty 

"""
def dfs(graph,source):
    stack = [source]
    visited=[False ] * len(graph.data)
    result=[]
    while len(stack)>0 :
        current  = stack.pop()
        if not visited[current]:
            result.append(current)
        visited[current] = True
        for v in graph.data[current]:
            if not visited[v]:
                stack.append(v)
    return result
n=5
edges = [(0,1),(1,2),(1,3),(1,4),(2,3),(3,4),(4,0)]
m=len(edges)
print(n,m)
graph1 = Graph(n,edges)
print(graph1)
print(bfs(graph1,1))
print(dfs(graph1,0))