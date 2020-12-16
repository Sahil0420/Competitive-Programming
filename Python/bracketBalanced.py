'''
sahil chandel
BALANCED BRACKETS ARE {} [] () [()] ([]) OR ANY OTHER COMBINATION WHICH HAVE OPENNING AND CLOSING BRACKET IN SAME ORDER
'''
from tabulate import tabulate
def isBalanced(string):
	symbols = { '(' : -1  , ')' : 1 , '[' : -2 , ']' : 2 , '{' : -3 , '}' : 3}
	stack=[]
	for i in string:
		if symbols[i] < 0:
			stack.append(i)
		else:
			if (len(stack)==0):
				return "unbalanced"
			top = stack.pop()
			if (symbols[top] + symbols[i] != 0):
				return "unbalanced"
	return "balanced"

for i in range(0,int(input('Enter the number of inputs\n'))):
	brackets = input()
	print(f"{brackets} are {isBalanced(brackets)}")


'''
10
[[[[[]]]]]
{{}}
()()
{}[]
[{()}]
())(()
[}[{}]]
}
{}
}{}
'''