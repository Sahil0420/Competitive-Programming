class Heap:
	def __init__(self):
		self.heap = [0]*100
		self.size=0

	def insert(self,data:int):
		self.size+=1
		index = self.size
		self.heap[index ] = data
		while index > 1:
			parent = index//2
			if (self.heap[parent] < self.heap[index]):
				self.heap[parent] , self.heap[index] = self.heap[index] , self.heap[parent]
				index  = parent
			else:
				return

	def remove(self):
		if self.size==0:
			print("Nothing to remove")
			return

		self.heap[1] = self.heap[size]
		self.size-=1

		i = 1
		while i < size:
			leftChild = 2*i
			rightChild = (2*i)+1

			if(leftChild > self.heap[1] and leftChild < self.size):
				self.heap[leftChild] , self.heap[1] = self.heap[1] , self.heap[leftChild]
				i = leftChild
			elif(rightChild < self.size and rightChild > self.heap[1]):
				self.heap[rightChild] , self.heap[1] =self.heap[1] , self.heap[rightChild]
				i = rightChild
			else:
				return

	def printHeap(self):
		for i in range(1 , self.size+1):
			print(self.heap[i],end=' ')
		print()

def heapify(arr , size , i):
	largest  = i
	leftChild = 2*i
	rightChild = (2*i)+1

	if(leftChild <= size and arr[largest] < arr[leftChild]):
		largest = leftChild

	if (rightChild <=size and arr[largest] < arr[rightChild]):
		largest = rightChild
	
	if largest != i:
		arr[largest] ,arr[i] = arr[i] , arr[largest]
		heapify(arr,size,largest)

def heapSort(arr , n ):
	size = n
	while size:
		arr[1],arr[size] = arr[size],arr[1]
		heapify(arr, size, 1)
		size-=1
	

# -----------------------------------------------main------------------------------------------------------#

inp = list(map(int  , input().strip().split()))

heap = Heap()
for i in inp:
	heap.insert(i)

heap.printHeap()


arr = [-1,6,3,2,1,5,4]
n = len(arr)-1
for i in range(n//2 , 1 , -1):
	heapify(arr,n,i)
print(arr)

heapSort(arr, n)

print()