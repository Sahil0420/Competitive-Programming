class Node:
    def __init__(self,val=None):
        self.data = val
        self.next = None

class SLL:
    def __init__(self):
        self.head = None
        self.tail = None
    
    def push(self,data,hetero=False):
        if not hetero:
            if type(data)==int:
                temp=self.head
                while(temp.next!=None): temp=temp.next
                temp.next = Node(data)

            if type(data)==list or type(data)==tuple:
                for x in data:
                    list1.push(x)
        else:
            temp=self.head
            while temp.next!=None: temp = temp.next
            temp.next=Node(data)

    def printList(self):
        temp=self.head
        while(temp):
            print(temp.data,"->",end=' ')
            temp=temp.next
        print(None)
    
    def remove(self,key):
        temp = self.head
        while temp:
            if(temp.next.data == key):
                temp.next = temp.next.next
            temp=temp.next
    
    def reverseList(self):
        prev = None
        current = self.head
        while(current):
            next = current.next
            current.next = prev
            prev = current 
            current =next 
        self.head = prev
    
    def insertAt(self,value,key):
        temp = self.head
        while(key>0 and temp!=None):
            key-=1
            temp=temp.next
        new_node = Node(value)
        new_node.next = temp.next
        temp.next = new_node



def printRev(Node):
    if Node is None: return
    printRev(Node.next)
    print(Node.data,'->',end=' ')


list1 = SLL()
list1.head=Node(1)
list1.push([12,5,32,23,24])
printRev(list1.head)
print()
list1.push((40,41,42,34))
list1.printList()
print("reversing the linked list : ")
list1.reverseList()
list1.printList()
list1.insertAt('sahil',5)
list1.printList()