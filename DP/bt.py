class Node:
	def __init__(self,data=None):
		self.data = data 
		self.left = None
		self.right = None

def insertNode(root , data):
	if root.data :
		if root.data > data :
			if root.left is None:
				root.left = Node(data)
			else:
				insertNode(root.left, data)
		elif root.data<data:
			if root.right is None:
				root.right = Node(data)
			else:
				insertNode(root.right, data)
	else:
		root.data = data

def inOrder(root):
	if root:
		inOrder(root.left)
		print(root.data , end=' ')
		inOrder(root.right)

def postOrder(root):
	if root:
		postOrder(root.left)
		postOrder(root.right)
		print(root.data , end=' ')

# def preOrder(root):
# 	current = root
# 	stack=[]
# 	while True:

# 		if current is not None : 
# 			stack.append(current)
# 			print(current.data , end=' ')
# 			current = current.left

# 		elif(stack):
# 			current = stack.pop()
# 			# print(current.data , end = ' ')
# 			current = current.right

# 		else:
# 			break
# 	print()

def preOrder(root):
	if root :
		print(root.data,end=' ')
		preOrder(root.left)
		preOrder(root.right)

def heightOfTree(root):
	if root is None : return 0
	lh = heightOfTree(root.left)+1
	rh = heightOfTree(root.right)+1
	return max(lh,rh)

def heightOfTreeIter(root):
	if root is None : 
		return 0
	ans=0
	queue = []
	queue.append(root)
	
	while queue:
		currSize = len(queue)
		while currSize > 0 :
			currNode = queue.pop(0)
			currSize -= 1
			if currNode.left:
				queue.append(currNode.left)
			if currNode.right:
				queue.append(currNode.right)
		ans+=1
	return ans


def printCurrentLevel(root , level=1):
	if root is None : 
		return
	if level==1:
		print(root.data , end=' ')
	printCurrentLevel(root.left ,level-1)
	printCurrentLevel(root.right,level-1)

def levelOrderTraverse(root):
	h = heightOfTree(root)
	for x in range(1,h+1):
		print(f"\nLevel {x} : ",end=' ')
		printCurrentLevel(root , x)

# def leftView(root,level=1,maxlevel=[0]):
# 	if root != None:
# 		if level> maxlevel[0] :
# 			print(root.data , end =' ')
# 			maxlevel[0] = level
# 		leftView(root.left , level+1 , maxlevel)
# 		leftView(root.right, level+1 , maxlevel)
# 	else:
# 		return

# def rightView(root , level=1 , maxlevel=[0]):
# 	if root != None:
# 		if level > maxlevel[0]:
# 			print(root.data ,end=' ')
# 			maxlevel[0] = level
# 		rightView(root.right ,level+1, maxlevel)
# 		rightView(root.right ,level+1, maxlevel)

def leftViewUntil(root,  level=1 , maxlevel=[0]):
	if root is not None:
		if level>maxlevel[0]:
			print(root.data , end=' ')
			maxlevel[0]= level
		leftViewUntil(root.left,level+1,maxlevel)
		leftViewUntil(root.right , level+1 , maxlevel)

def leftView(root):
	print("\nLeft View of the Tree : ",end='')
	level ,maxlevel= 1,[0]
	leftViewUntil(root , level , maxlevel)

def rightViewUntil(root,level=1,maxlevel=[0]):
	if root is not None : 
		if level > maxlevel[0]:
			print(root.data , end=' ')
			maxlevel[0] = level
		rightViewUntil(root.right , level+1 , maxlevel)
		rightViewUntil(root.left , level+1 , maxlevel)

def rightView(root):
	print("\nRight View of the tree : ",end='')
	level , maxlevel = 1, [0]
	rightViewUntil(root,level , maxlevel)

def getVerticalOrder(root,hd,m):
	if root is None:
		return
	try:
		m[hd].append(root.data)
	except:
		m[hd]=[root.data]

	getVerticalOrder(root.left,hd-1, m )
	getVerticalOrder(root.right,hd+1, m )

def printVerticalOrder(root):
	#create  a  map  and store vertical order of a binary 
	#tree ith given root
	m,hd = dict() , 0 
	mi = getVerticalOrder(root, hd, m )
	for index in (sorted(m)):
		print(index ,":",end=' ')
		for i in m[index]:
			print(i , end=' ')
		print()

def traverseLeft(root,ans=[]):
	if (root == None or (root.left == None and root.right == None)):
		return
	ans.append(root.data)
	if root.left :
		traverseLeft(root.left ,ans )
	elif root.right:
		traverseLeft(root.right , ans )
	return ans 

def traverseRight(root,ans=[]):
	if ( root == None or (root.right==None and root.left  == None )) : 
		return
	ans.append(root.data)
	if root.right:
		traverseRight(root.right ,ans )
	else:
		traverseRight(root.left ,ans )
	return ans

def traverseLeaf(root , ans=[]):
	if root==None:
		return

	if root.left == None and root.right ==None:
		ans.append(root.data)
		return
	traverseLeaf(root.left , ans)
	traverseLeaf(root.right , ans)

def boundaryTraversal(root , ans=[]):
	if root == None:
		return ans 
	ans.append(root.data)
	traverseLeft(root.left , ans)
	traverseLeaf(root.left, ans)
	traverseLeaf(root.right, ans)
	traverseRight(root.right , ans)
	print(ans)

def topView(root):
	print()
	ans = []
	if root is None:
		return ans
	m = {}
	q = [(root,0)]
	while q:
		temp = q.pop(0)
		frontNode=temp[0]
		hd = temp[1]

		if(not(hd in m)):
			m[hd] = (frontNode.data)

		if frontNode.left:
			q.append((frontNode.left,hd-1))
		
		if frontNode.right:
			q.append((frontNode.right,hd+1))
	for i in sorted(m):
		ans.append(m[i])

	return ans

def bottomView(root):
	ans=[]
	if root is None: 
		return
	m = {}
	q = [(root,0)]
	while q:
		temp = q.pop(0)
		frontNode = temp[0]
		hd = temp[1]

		m[hd] = frontNode.data

		if frontNode.left:
			q.append((frontNode.left , hd-1))

		if frontNode.right:
			q.append((frontNode.right , hd+1))

	for i in sorted(m):
		ans.append(m[i])

	return ans 

def sumSolve(root , summ , maxSum , leng , maxleng):
	if root==None:
		if(leng > maxleng[0]):
			maxleng[0] = leng
			maxSum[0] = summ
		elif(leng == maxleng[0]):
			maxSum[0] = max(maxSum[0],summ)
		return
	sumSolve(root.left, summ+root.data, maxSum, leng+1, maxleng)
	sumSolve(root.right, summ+root.data, maxSum, leng+1, maxleng)


def sumOfLongestRootToLeafPath( root ):
	if root==None:
		return

	summ = leng = 0
	maxSum=[-999999999999]
	maxleng=[0]
	sumSolve(root, summ, maxSum, leng, maxleng)
	return maxSum[0]

def lca(root:Node , n1 : int , n2 : int)->int:
	#lowest common ancestor of any two nodes in tree
	if root is None :
		return

	if(root.data == n1 or root.data == n2 ):
		return root

	leftAns = lca(root.left, n1, n2) 
	rightAns = lca(root.right, n1, n2) 

	if ( leftAns != None and rightAns != None):
		return root
	elif (leftAns != None and  rightAns == None):
		return leftAns
	elif (leftAns == None and rightAns != None ):
		return rightAns
	else:
		return None


#____________________________________________________________________main method________________________________________________________________#
tree = Node()
if tree : print("tree created")
datas = list(map(int,input().strip().split()))
for x in datas : insertNode(tree, x)
print("INORDER : ")
inOrder(tree)
h = heightOfTree(tree)
print("\nHeight of Tree = ",h)

h = heightOfTreeIter(tree)
print("Height of Tree (iter ) = ",h)
printCurrentLevel(tree , 3)
levelOrderTraverse(tree)
leftView(tree)
rightView(tree)
print(f"\nVertical Order Traversal :")
printVerticalOrder(tree)
print("-"*30)
# print(traverseLeft(tree))
# print(traverseRight(tree))

boundaryTraversal(tree)
print("PRE-ORDER : ")
preOrder(tree)
print("\nPOST-ORDER : ")
postOrder(tree)
print('TOP VIEW\t:\t',topView(tree))
print("BOTTOM VIEW\t:\t",bottomView(tree))

print(f"Sum of the longest path from root to Node of the tree : {sumOfLongestRootToLeafPath(tree)}")

print(f"Lowest Common Ancestor of node 65 and 132 = {lca(tree, 133 , 140).data}")
"""
inputs	:	100 62 43 65 44 41 103 101 102 120 125 130 124 123
100 134 34 65 23 56 57 132 133 135 140
"""