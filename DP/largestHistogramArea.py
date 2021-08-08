arr = list(map(int , input().strip().split()))
print(arr)

rb = [0]*len(arr)
stack = []
stack.append(len(arr)-1)
rb[len(arr)-1] = len(arr)

for i in range(len(arr)-2 , -1 , -1):
	while (len(stack)>0 and arr[i] < arr[stack[-1]]):
		stack.pop()
	if len(stack)==0:
		rb[i] = len(arr)
	else:
		rb[i] = stack[-1]
	stack.append(i)

lb = [0]*len(arr)
stack = []
stack.append(0)
lb[0] = -1

for i in range(1,len(arr)):
	while (len(stack)>0 and arr[i] < arr[stack[-1]]):
		stack.pop()
	if len(stack)==0:
		lb[i] = -1;
	else:
		lb[i] = stack[-1]
	stack.append(i)

maxarea = 0 
for i in range(len(arr)):
	width  = rb[i] - lb[i] - 1
	area  = arr[i] * width
	if area > maxarea:
		maxarea = area

print(maxarea)