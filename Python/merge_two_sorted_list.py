class ListNode:
	def __init__(self , val=0, next=None):
		self.val = val
		self.next = next

def insert(head, newNode):
	newNode.next = head.next
	head.next = newNode

class Solution:
	def mergeKLists(self,lists):
		if len(lists)==0:
			return []
		arr = [j for i in lists for j in i]
		print(arr)
		head  = ListNode()

def main():
	arr = [] 
	for _ in range(int(input())):
		

if __name__ == '__main__':
	main()