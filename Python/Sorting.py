def bubbleSort(arr):
	n = len(arr)
	c=0
	while(c<n-1):
		for i in range(n-c-1):
			if arr[i]>arr[i+1]:
				arr[i],arr[i+1] = arr[i+1],arr[i]
		c+=1
	print(arr)

def selectionSort(arr):
 n=len(arr)
 for step in range(n):
  for i in range(step+1,n):
   if arr[step]>arr[i]:
   	arr[step] , arr[i] = arr[i] , arr[step]
 print (arr)

def insertionSort(arr):
	n=len(arr)							
	for i in range(n):
		key = arr[i]			
		j = i-1
		while (j>=0 and key < arr[j]):
			arr[j+1] = arr[j]
			j-=1
		arr[j+1]=key
	print(arr)

def mergeSort(arr):
	if len(arr)>1:
		n = len(arr)
		mid = n//2
		left = arr[:mid]
		right = arr[mid:]
		mergeSort(left)
		mergeSort(right)

		i=j=k=0

		while i<len(left) and j<len(right):
			if left[i]<right[j]:
				arr[k]=left[i]
				i+=1
			else:
				arr[k] = right[j]
				j+=1
			k+=1

		while i<len(left):
			arr[k]=left[i]
			k+=1
			i+=1

		while j<len(right):
			arr[k]=right[j]
			k+=1
			j+=1

def partition(arr ,l , h ):
	pivot = arr[l]
	i,j = l,h

	while i<j:

		while arr[i]<=pivot and i < h:
			i+=1

		while arr[j]>= pivot and j>l:
			j-=1
		if i<j : 
			arr[i],arr[j] = arr[j],arr[i]
		arr[l], arr[j] = arr[j],arr[l]
	return j

def quickSort(arr, l , h ):
	if l<h:
		pivot = partition(arr, l , h )

		quickSort(arr,l,pivot-1)
		quickSort(arr,pivot+1, h)


arr=[9,8,7,6,5,4,3,2,1]
# print('bubbleSort : ')
# bubbleSort(arr)
# print('selectionSort : ')
# selectionSort(arr
# insertionSort(arr)
# mergeSort(arr)
print(arr)
quickSort(arr,0,len(arr)-1)
print(arr)

