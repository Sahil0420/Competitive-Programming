class Node:
	def __init__(self , data:int):
		self.data = data
		self.next = None
		self.prev = None

def append(head,data):
	temp = head
	while temp.next:
		temp = temp.next
	temp.next = Node(data)
	temp.next.prev = temp

def printDLL(head):
	temp = head
	while temp:
		print(temp.data,end=' <-> ')
		temp = temp.next
	print()

def findSumInLinkedList(head , target):
	temp = head
	ans = []
	n1 = n2 = 0
	while temp.next:
		temp2 = temp.next
		n1 = temp.data
		while temp2.next:
			n2 = temp2.data
			if n1+n2 == target:
				ans.append((n1,n2))
			temp2 = temp2.next
		temp = temp.next
	return ans
head = Node(1)
nodes = list(map(int,input().strip().split()))

for i in nodes:
	append(head, i)

printDLL(head)

target = int(input())
print(f"TARGET : {target}")

ans = findSumInLinkedList(head, target)
for i in ans : print(i , end=' ')


'''
input:::::::::::::::::::::::::::::::::::::::::> 2 4 5 6 8 9 
7
'''