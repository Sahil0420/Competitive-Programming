class Heap:
	def __init__(self):
		self.heap = [0]*100

	@staticmethod
	def heapify(arr , n , i ):
		largest = i
		left = 2*i+1
		right = 2*i+2

		if left < n and arr[largest] < arr[left]:
			largest = left

		if right < n and arr[largest] < arr[right]:
			largest = right

		if largest != i :
			arr[largest] , arr[i] = arr[i] , arr[largest]
			Heap.heapify(arr, n , largest)

	@staticmethod
	def heapSort(arr, n):
		size=n-1
		while size:
			arr[size] , arr[1] = arr[1] , arr[size]
			size-=1
			Heap.heapify(arr, size ,1)

arr = [1,2,3,4,5,6]
n = len(arr)
for i in range(n//2 , 0 , -1):
	Heap.heapify(arr,n,i)

Heap.heapSort(arr, n)

print(arr)