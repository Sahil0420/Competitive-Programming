from tabulate import tabulate


class Graph:
    def __init__(self, n, edges, directed=False):
        self.data = [[] for x in range(n)]
        self.weights = [[] for x in range(n)]
        for e in edges:
            if len(e) == 3:
                v1, v2, w = e
                self.data[v1].append(v2)
                self.weights[v1].append(w)
                if not directed:
                    self.data[v2].append(v1)
                    self.data[v2].append(w)
            else:
                v1, v2 = e
                self.data[v1].append(v2)
                if not directed:
                    self.data[v2].append(v1)

    def __repr__(self):
        result = ''
        for i, (nodes, weight) in enumerate(zip(self.data, self.weights)):
            result += str(i)+':'+str(list(zip(nodes, weight)))+'\n'
        return result

n = 6
edges = [(0, 1, 4), (0, 2, 2), (1, 2, 5), (1, 3, 10),
         (2, 4, 3), (4, 3, 4), (3, 5, 11)]
print(n, len(edges))

graph = Graph(n, edges, directed=True)

print(repr(graph))
