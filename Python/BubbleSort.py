from cmath import pi


def BubbleSort(a:list):
    n=len(a)
    c=0
    while c<n-1:
        for x in range(n-c-1):
            if(a[x]>a[x+1]):
                a[x],a[x+1] = a[x+1],a[x]
        c+=1

def insertionSort(a:list):
    n=len(a)
    for i in range(1,n):
        key=a[i]
        j=i-1
        while j>=0 and key<a[j]:
            a[j+1] = a[j]
            j-=1
        a[j+1]=key

def SelectionSort(a:list):
    for step in range(len(a)):
        for i in range(step+1,len(a)):
            if(a[i] < a[step]):
                a[i],a[step] = a[step],a[i]

def mergeSort(arr:list):
 if len(arr)>1:   
    n=len(arr)
    m=len(arr)//2
    L = arr[:m]
    R = arr[m:]

    mergeSort(L)
    mergeSort(R)

    i=j=k=0
    while i<len(L) and j<len(R):
        if L[i]<R[j]:
            arr[k]=L[i]
            i+=1
        else:
            arr[k]=R[j]
            j+=1
        k+=1
    
    while i<len(L):
        arr[k] = L[i]
        k+=1
        i+=1
    
    while j<len(R):
        arr[k] = R[i]
        k+=1
        j+=1

def partition(arr:list , l , h):
    i,j=l,h
    pivot=arr[l]
    
    while i<j:
        
        while (arr[i]<=pivot):
            i+=1
        
        while(arr[j]>pivot):
            j-=1
        
        if(i<j):
            arr[i],arr[j]=arr[j],arr[i]
        
    arr[l],arr[j] = arr[j],arr[l]
    return j

def quickSort(arr:list , l , h ):
    if(l<h):
        pivot = partition(arr,l,h)
        quickSort(arr,l,pivot-1)
        quickSort(arr,pivot+1,h)
    return arr
    

a =[2,4,3,1,2,7,3]
b=a.copy()
BubbleSort(a)
print("Original List: ",b)
print(f"Bubble Sort : {a}")

a=[32,52445,4,3,56,4]
b=a.copy()
print(f"Original List  : {b}")
insertionSort(a)
print(f"Insertion Sort : {a}")

a=[32,524,234,33,56,4]
b=a.copy()
print(f"Original List  : {b}")
SelectionSort(a)
print(f"Selection Sort : {a}")

c=[22,43,2,32,5,3]
print(f"Original List : {c}")
mergeSort(c)
print(f"Merge Sort : {c}")

d=[6,4,9,3,2,6,4,34,3,46,4,6,77]
print("ORIGINAL LIST D :",d)
print("QUICK SORT LIST :",quickSort(d,0,len(d)-1))