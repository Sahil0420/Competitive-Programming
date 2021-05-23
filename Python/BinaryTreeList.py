class Node:
	def __init__(self,data=None):
		self.data = data
		self.left =None
		self.right = None

def addNode(root:Node , val ):
	if root.data !=None:
		if root.data>val:
			if root.left != None :
				addNode(root.left, val)
			else:
				root.left = Node(val)
		elif root.data < val:
			if root.right != None:
				addNode(root.right, val)
			else:
				root.right = Node(val)
	else:
		root.data = val

def inOrder(root):
	if root == None:
		return
	inOrder(root.left)
	print(root.data,end=" ")
	inOrder(root.right)

def heightOfTree(root):
	if root==None : 
		return 0
	left = heightOfTree(root.left)
	right = heightOfTree(root.right)
	return max(left, right)+1

def heightIter(root):
	ans=0
	if root is None:
		return ans

	queue=[]
	queue.append(root)

	while queue:
		currSize = len(queue)
		while currSize>0:
			currNode = queue.pop(0)
			currSize-=1

			if currNode.left :
				queue.append(currNode.left)
			if currNode.right :
				queue.append(currNode.right)
		ans+=1
	return ans


def printCurrentLevel(root,level):
	if root is None :
		return
	if level ==1:
		print(root.data,end=' ')
	printCurrentLevel(root.left, level-1)
	printCurrentLevel(root.right, level-1)

def levelOrderTraversal(root):
	height = heightOfTree(root)
	for x in range(1,height+1):
		print(f'Level {x} nodes : ',end=" ")
		printCurrentLevel(root, x)
		print()

#main function
def leftViewUntil(root,level=1,maxlevel=[0]):
	if root is not None:
		if maxlevel[0]<level:
			print(root.data,end=' ')
			maxlevel[0] = level
		leftViewUntil(root.left, level+1, maxlevel)
		leftViewUntil(root.right, level+1, maxlevel)

def leftView(root):
	print('Left View Of The Tree : ',end='\t')
	maxlevel=[0]
	leftViewUntil(root,1, maxlevel)

def rightViewUnitl(root,level=1,maxlevel=[0]):
	if root != None:
		if maxlevel[0]<level:
			print(root.data,end=' ')
			maxlevel[0]=level
		rightViewUnitl(root.right,level+1,maxlevel)
		rightViewUnitl(root.left,level+1,maxlevel)

def rightView(root):
	if root is None : 
		return
	print("Right View Of The Tree : ",end='\t')
	maxlevel =[0]
	rightViewUnitl(root,1,maxlevel)

def diameterOfTree(root):
	if root is None:
		return 0
	left = diameterOfTree(root.left)
	right = diameterOfTree(root.right)
	both = heightOfTree(root.left)+1+heightOfTree(root.right)
	return max(left,right,both)



def isBalanced(root):
	if root==None:
		return True

	left = isBalanced(root.left)
	right = isBalanced(root.right)
	ans=False
	if (abs(heightIter(root.left) - heightIter(root.right))) <=1:
		ans=True

	if (left and right and ans) : return True
	return False	


def isIdentical(root1, root2):
	if root1==None and root2==None : return True

	if root1==None and root2!=None : return False

	if(root1 != None and root2 ==None) :return False

	left  =  isIdentical(root1.left, root2.left)
	right  =  isIdentical(root1.right, root2.right)

	value = root1.data==root2.data

	if left and value and right:
		return True
	else:
		return False


# ____________________________main method___________________________________


root = Node(100)
n = list(map(int,input().strip().split()))
for i in n:
	addNode(root,i)

inOrder(root)
print()
print(f"height of the tree is => {heightOfTree(root)}")
print(f"height of the tree is => {heightIter(root)}")
printCurrentLevel(root, 5)
print()
levelOrderTraversal(root)

leftView(root)
print()
rightView(root)
print(f'\nDiameter of tree : {diameterOfTree(root)}')

nodes = list(map(int,input().strip().split()))
tree2 = Node()
for x in nodes:
	addNode(tree2 , x)
inOrder(tree2)
print()
levelOrderTraversal(tree2)
print(isBalanced(tree2))

print('Trees are identical ') if isIdentical(root, tree2) else print("Trees are not identical")