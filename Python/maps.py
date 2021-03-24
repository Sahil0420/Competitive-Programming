from tabulate import tabulate
class Graph:
	def __init__(self , nodes):
		self.graph_dict ={}

		for (start,end) in nodes:
			if start in self.graph_dict:
				self.graph_dict[start].append(end)
			else:
				self.graph_dict[start] = [end]
		print(self.graph_dict)	

	def getPaths(self, start , end ,path=[]):
		
		path = path+[start]
		if start==end:
			return [path]

		if start not in self.graph_dict:
			return []

		paths = []
		for node in self.graph_dict[start]:
			if node not in path:
				new_paths = self.getPaths(node, end , path)
				for p in new_paths:
					paths.append(p)
		return paths


routes = [("india" , "london") , ("india" , "dubai") , ("dubai" , "new york") ,('dubai', 'london'), ("london" , "new york")]
graph1 = Graph(routes)
print (tabulate(graph1.getPaths("india","london")))	
print (tabulate(graph1.getPaths("india","new york")))	

