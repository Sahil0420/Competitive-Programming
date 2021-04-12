class Node:
	def __init__(self,data):
		self.data = data
		self.link = None

	def setVal(self,data):
		self.data = data

	def setNext(self,next1):
		self.link = next1

	def getVal(self):
		return self.data
	
	def getNext(self):
		return self.link
	
	def hasNext(self):
		if self.link is None:
			return False
		else : 
			return True

class Stack:
	def __init__(self):
		self.head = None
		self.length = 0
	
	def Length(self):
		current = self.head
		count=0
		while current:
			current = current.link
			count+=1
		
		return count
	
	def push(self,val):
		temp = self.head
		if temp!=None:
			while temp.getNext()!= None:
				temp = temp.getNext()
			new_node = Node(val)
			temp.link=(new_node)
			self.length+=1
		else:
			self.head = Node(val)
			self.length+=1
	
	def pop(self):
		current = self.head
		if current != None:
			while (current.link).link != None : current = current.link
			current.link=None
		else:
			print("STACK UNDERFLOW")
	
	def top(self):
		current = self.head
		if current != None:
			while (current.link)!= None : current = current.link
			data = current.data
		else:
			data=-1
		return data
	
	def traverse(self):
		current = self.head
		if current == None: 
			print("Stack empty")
		else:
			while current != None:
				print(current.data,end=" ")
				current = current.getNext()
		print()

st = Stack()
print('Stack')
st.push(120)
st.push(20)
st.push(210)
st.traverse()
st.pop()
st.pop()
st.traverse()
print(st.Length())