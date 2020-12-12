from tabulate import tabulate
class Graph:
    def __init__(self,edges):
        self.edges = edges
        self.graph_dict={}
        for (start,end) in self.edges:
            if start in self.graph_dict:
                self.graph_dict[start].append(end)
            else:
                self.graph_dict[start]=[end]
        a=set()
        for start,end in bus_routes:
            a.add(start)
        for x in a:
            print(x,'\tto\t',self.graph_dict[x])
    
    def get_paths(self,start,end,paths=[]):
        paths =paths+[start]
        if start == end :
            return [paths] 
        if start not in self.graph_dict:
            return []
        path=[]
        for node in self.graph_dict[start]:
            if node not in paths:
                new_paths = self.get_paths(node,end,paths)
                for p in new_paths:
                    path.append(p)
        return path
    
    def best_path(self,paths):
        small=(paths[0])
        for x in range(len(paths)):
            if len(small)>len(paths[x]):
                small = paths[x]
        return small
        # tables format html , fancy_grid, jira , textile,plain
bus_routes = [
    ('Ghumarwin','Bilaspur'),
    ('Ghumarwin','Jahu'),  
    ('Bilaspur','Ghumarwin'),
    ('Bilaspur','Sundernagar'),
    ('Sundernagar','Mandi'),
    ('Mandi','Jahu'),
    ('Mandi','Sundernagar'),
    ('Sundernagar','Bilaspur'),
    ('Jahu','Mandi'),
    ('Jahu','Ghumarwin'),
]

bus_routes_graph = Graph(bus_routes)
# data = [['Name','ID'],['Yondu',1123],['sahil',3121],['aman',2343]]
# print(tabulate(data , headers='firstrow',showindex='always',tablefmt='fancy_grid'))
print(tabulate(bus_routes,headers=['Bus','Routes'],tablefmt='fancy_grid'))
paths = bus_routes_graph.get_paths('Mandi','Bilaspur')
print(tabulate(paths))
print()
bp = bus_routes_graph.best_path(paths)
print(bp)
