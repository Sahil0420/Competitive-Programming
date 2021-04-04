n=int(input())
m=int(input())
graph = [[0 for x in range(n+1)] for i in range(n+1)]
graph2= [[3] for x in range(n+1)]
# print(graph)exir
for i in range(m):
    v1=int(input())
    v2=int(input())

    graph[v1][v2]=1
    graph[v2][v1]=1

    graph2[v1].append(v2)
    graph2[v2].append(v1)

for i in graph:
    for j in i:
        print(j,end='')
    print()

print(graph2)
