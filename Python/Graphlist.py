from more_itertools import adjacent
from tabulate import tabulate
class Graph:
    def __init__(self,edges):
            self.edges = edges
            self.adjList = {}

            for (start,end) in self.edges:
                if start in self.adjList:
                    self.adjList[start].append(end)
                else:
                    self.adjList[start] = [end]
            self.adj = str(self.adjList)
    def __repr__(self) -> str:
        return self.adj

    def getPaths(self,start,end,paths=[]):
        paths=paths+[start]
        
        if start not in self.adjList:
            return []

        if start == end:
            return[paths]
        
        path=[]
        for node in self.adjList[start]:
            if node not in paths:
                new_path = self.getPaths(node,end,paths)
                for p in new_path:
                    path.append(p)
        return path

routes=[
    ('Mumbai','Paris'),
    ('Mumbai','Dubai'),
    ('Paris','New York'),
    ('New York','Dubai'),
    ('Dubai','New York'),
]

graph = Graph(routes)
print(graph)
r=[]
r = graph.getPaths("Mumbai","New York",r)
print(r)