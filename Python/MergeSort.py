# def Merge(arr,arr1,n,n1):
#     i,j,k=0,0,0
#     c=[0 for x in range(n+n1)]
#     while(i<n and j<n1):
#         if(arr[i] < arr1[j]):
#             c[k]=arr[i]
#             k+=1
#             i+=1
#         elif (arr[i]>arr1[j]):
#             c[k]=arr1[j]
#             k+=1
#             j+=1
#         elif(arr[i]==arr1[j]):
#             c[k]=arr[i]
#             k+=1
#             c[k]=arr1[j]
#             k+=1
#             i+=1
#             j+=1
#     while(i<n):
#         c[k]=arr[i]
#         k+=1
#         i+=1    
#     while(j<n1):
#         c[k]=arr1[j]
#         k+=1
#         j+=1
#     return c
def Merge(arr,l,m,r):
    n1=m-l+1
    n2=r-m

    L=[0]*n1
    R=[0]*n2

    for i in range(0,n1):
        L[i] = arr[l+i]
    
    for j in range(0,n2):
        R[j]=arr[m+1+j]
    
    i,j,k=0,0,l
    while i<n1 and j<n2 :
        if L[i]<=R[j]:
            arr[k]=L[i]
            i+=1
        else:
            arr[k]=R[j]  
            j+=1
        k+=1
    
    while i<n1:
        arr[k]=L[i]
        i+=1
        k+=1
    
    while j<n2:
        arr[k] = R[j]
        k+=1
        j+=1
    
def mergeSort(arr,l,r):
    if l<r:
        m=l+(r-l)//2
        mergeSort(arr,l,m)
        mergeSort(arr,m+1,r)
        Merge(arr,l,m,r)

a=[]    
for x in range(int(input())):
    a.append(int(input()))

print(a)
mergeSort(a,0,len(a)-1)
print(a)