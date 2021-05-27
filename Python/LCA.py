class Node:
    def __init__(self,val ):
        self.data = val
        self.left = None
        self.right = None

    def addNode(self,val):
        if self.data:
            if self.data>val:
                if self.left is None:
                    self.left = Node(val)
                else:
                    self.left.addNode(val)
            elif self.data<val:
                if self.right is None:
                    self.right = Node(val)
                else:
                    self.right.addNode(val)
        else:
            self.data = val

    def preOrderTraversal(self):
        if self == None:
            return
        print(self.data,end=" ")
        if self.left : self.left.preOrderTraversal()
        if self.right: self.right.preOrderTraversal()

def LCA(root,n1,n2):
    if root==None:
        return None

    if root.data==n1 or root.data==n2:
        return root.data

    L = LCA(root.left,n1,n2)
    R = LCA(root.right,n1,n2)

    if L is None : return R
    if R is None : return L

    return root.data

root = Node(100)
n=int(input("enter the number of node : "))
for x in range(n):
    root.addNode(int(input()))

root.preOrderTraversal()
print()

print(LCA(root,323,343))
print(LCA(root,102,103))

print(f"sahil chandel is the best {root.data}")
