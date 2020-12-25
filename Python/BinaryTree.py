import collections

class Node:    
    def __init__(self,val=None):
        self.data = val
        self.left = None
        self.right = None
    
    def traversePreOrder(self):
        print(self.data,end=' ')
        if self.left: self.left.traversePreOrder()
        if self.right: self.right.traversePreOrder()
        

    def traversePostOrder(self):
        if self.left: self.left.traversePostOrder()
        if self.right : self.right.traversePostOrder()
        print(self.data,end=' ')
    
    def traverseInOrder(self):
        if self.left: self.left.traverseInOrder()
        print(self.data,end=' ')
        if self.right: self.right.traverseInOrder()
    
    def addNode(self,data):
        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.addNode(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.addNode(data)
        else:
            self.data = data

    def max_val(self):
        if self.right:
            ptr = root
            max1 = ptr.data
            while ptr.right!=None:
                ptr = ptr.right
                max1=ptr.data
            print("Maximum data : ",str(max1))
        else:
            print(f"Maximum data :{self.data}")

        
def height(root):
    if root is  None:
        return 0
    lheight = height(root.left)
    rheight = height(root.right)
    return max(lheight,rheight)+1

def height_iterative(root):
    ans = 0
    if root is None:
        return ans
    queue = collections.deque()
    
    queue.append(root)

    while queue:
        currSize = len(queue)

        while currSize > 0:
            currNode = queue.popleft()
            currSize-=1

            if currNode.left is not None:
                queue.append(currNode.left)
            if currNode.right is not None:
                queue.append(currNode.right)
        ans+=1
    return ans

def printCurrentLevel(root,level):
    if root is None:
        return
    if level == 1:
        print(root.data,end=' ')
    elif level>1:
        printCurrentLevel(root.left,level-1)
        printCurrentLevel(root.right,level-1)

def printLevelOrder(root):
    h = height(root)
    for x in range(1,h+1):
        print(f'Level {x} nodes are : ',end='')
        printCurrentLevel(root,x)
        print()

def leftViewUntil(root,level,maxlevel):
    if root != None:
        if maxlevel[0] < level:
            print(root.data,end=' ')
            maxlevel[0]=level
        leftViewUntil(root.left,level+1,maxlevel)
        leftViewUntil(root.right,level+1,maxlevel)

def leftView(root):
    maxlevel=[0]
    leftViewUntil(root,1,maxlevel)

def rightViewUntil(root,level,maxlevel):
    if root!=None:
        if maxlevel[0]<level:
            print(root.data,end=' ')
            maxlevel[0]=level
        rightViewUntil(root.right,level+1,maxlevel)
        rightViewUntil(root.left,level+1,maxlevel)

def rightView(root):
    maxlevel=[0]
    rightViewUntil(root,1,maxlevel)

def diameterOfTree(root):
    if root == None:
        return 0
    left = diameterOfTree(root.left)
    right = diameterOfTree(root.right)
    both = height_iterative(root.left)+1+height_iterative(root.right)
    return max(left,right,both)



root = Node()
root.addNode(100)
root.addNode(99)
root.addNode(98)
root.addNode(97)
root.addNode(96)
root.addNode(364)
root.addNode(101)
root.addNode(102)
root.addNode(105)
root.addNode(103)
root.addNode(106)
print('In Order')
root.traverseInOrder()
print('\n')
print('Post Order')
root.traversePostOrder()
print('\n')
print('Pre Order')
root.traversePreOrder()
print('\n')
root.max_val()
h=height(root)
print("Height of the Binary Tree : ",)
printLevelOrder(root)
print("Left View of the tree : ",end='')
leftView(root)
print()
print("Right View of the tree : ",end='')
rightView(root)
print(f"\nDiameter of Tree = {diameterOfTree(root)}")
print(f"Diameter of Tree = {diameterOfTree(root)}")
