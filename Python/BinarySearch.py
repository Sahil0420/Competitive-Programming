import sys
def binarSearch(arr, key ):	
	lo = 1
	hi = len(arr)-1 
	while True:
		mid = (lo + hi )//2
		if arr[mid] == key: return key 
		if arr[mid] > key :
			print(f"big {arr[mid]}")
			hi = mid-1
		elif arr[mid]<key:
			lo = mid
			print(f"small {arr[mid]}")

arr = [i for i in range(1,1000,2)]
print(binarSearch(arr, 241))