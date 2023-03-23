class Node:
  def __init__(self, data=None, next=None):
    self.data = data
    self.next = next


class LinkedList:
  def __init__(self):
    self.head = Node()

  def push_back(self, val):
    if self.head.data is None:
      self.head.data = val
    else:
      curr = self.head
      while curr.next:
        curr = curr.next
      curr.next = Node(val)

  def insert_at_head(self, val):
    new_node = Node(val)
    new_node.next = self.head
    self.head = new_node

  def traverse(self):
    curr = self.head
    while curr:
      print(f"{curr.data} -->", end=' ')
      curr = curr.next
    print('None')

  def reverse(self):
    prev, curr, next_node = None, self.head, None
    while curr:
    	next_node = curr.next
    	curr.next = prev
    	prev = curr
    	curr = next_node
    self.head = prev



def main():
  linked_list = LinkedList()
  arr = list(map(int, input().strip().split()))
  for i in arr:
    linked_list.push_back(i)
  linked_list.traverse()
  linked_list.insert_at_head(9)
  linked_list.traverse()
  linked_list.reverse()
  linked_list.traverse()


if __name__ == "__main__":
  main()


"""

"""