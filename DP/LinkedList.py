class Node:
	def __init__(self,data):
		self.data = data
		self.next = None

class LinkedList:
	def __init__(self,data=None):
		self.head = None
		self.tail = None

	def insert(self,data):
		if self.head == None:
			self.head = Node(data)
			self.tail= self.head
		else:
			self.tail.next = Node(data)
			self.tail = self.tail.next

	def printList(self):
		temp = self.head
		while (temp ):
			print(temp.data,end="->")
			temp = temp.next
		print("None")

	def delete(self,key):
		temp =self.head
		if temp is not None:
			if temp.data == key:
				self.head = temp.next 
				temp = None
				return
		while (temp is not None):
			if temp.data == key:
				break
			prev = temp
			temp = temp.next
		if (temp == None):
			return

		prev.next = temp.next
		temp = None

	def makeCycle(self,pos):
		if pos==0:
			return
		temp = self.head
		for i in range(1,pos):
			temp = temp.next
		self.tail.next = temp

	def detectCycle(self):
		slow = self.head
		fast = self.head

		try:
			while(slow!=None):
				slow = slow.next
				fast = fast.next.next
				if(slow.data == fast.data):
					print(slow.data)
					return 
		except :
			print("No cycle found")
			
	def removeCycle(self):
		self.tail.next=None				

lis = LinkedList()

lis.insert(100)
lis.insert(80)
lis.insert(90)
lis.printList()
lis.makeCycle(2)
lis.detectCycle()
lis.removeCycle()
lis.printList()
lis.detectCycle()
