from tabulate import tabulate
class Graph:
    def __init__(self,edges):
        self.edges = edges
        self.graph_dict={}
        for (start,end) in self.edges:
            if start in self.graph_dict:
                self.graph_dict[start].append(end)
            else:
                self.graph_dict[start] = [end]
        print(self.graph_dict)

    def get_paths(self,start,end,paths=[]):
        paths = paths+[start]

        if start == end:
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

routes  =[
    ('Mumbai','Paris'),
    ('Mumbai' , 'Dubai'),
    ('Paris','Dubai'),
    ('Paris','New York'),
    ('Dubai','New York'),
    ('New York','Toronto'),
    ('Mumbai','Toronto'),
]

route_graph = Graph(routes)
print()
print(tabulate(route_graph.get_paths("Mumbai","New York")))
