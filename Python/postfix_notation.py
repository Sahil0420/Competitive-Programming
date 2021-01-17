def precedence(char):
	if char == '~':
		return 2

	if char == '+' or char == '-':
		return 1
	return 0  # All other characters are not operators


def is_operand(char):
  return char.isalnum()


def infix_to_postfix(s):
  stack = []
  postfix = []
  i = 0
  while i < len(s):
    if is_operand(s[i]):
      operand = ""
      while i < len(s) and is_operand(s[i]):
        operand += s[i]
        i += 1
      postfix.append(operand)
    elif s[i] == '(':
      stack.append(s[i])
      i += 1
    elif s[i] == ')':
      while stack and stack[-1] != '(':
        postfix.append(stack.pop())
      if stack:
        stack.pop()
      i += 1
    elif s[i] == '-' and (i == 0 or s[i - 1] in ['(', '+', '-']):
      stack.append("~")  # Represent unary minus as '~'
      i += 1
    elif s[i] in ['+', '-']:
      while stack and stack[-1] != '(' and (precedence(s[i]) <= precedence(stack[-1])):
        postfix.append(stack.pop())
      stack.append(s[i])
      i += 1
    else:
      i += 1  # ignore whitespace

  while stack:
    postfix.append(stack.pop())
  return " ".join(postfix).replace("  ", " ")


def evaluate(postfix):
  stack = []
  tokens = postfix.split()
  for token in tokens:
    if token.isalnum():
      stack.append(int(token))
    elif token == '~':
      operand = stack.pop()
      stack.append(-operand)
    elif token == '+':
      operand2 = stack.pop()
      operand1 = stack.pop()
      stack.append(operand1 + operand2)
    elif token == '-':
      operand2 = stack.pop()
      operand1 = stack.pop()
      stack.append(operand1 - operand2)
  return stack.pop()

def calculate(s: str) -> int:
 	number = 0
 	result = 0
 	signvalue = 1
 	stack = []
 	for c in s:
 		if c.isdigit():
 			number = number * 10 + int(c)
 		elif c in ['+', '-']:
 			result += number * signvalue
 			signvalue = 1 if c == '+' else -1
 			number = 0
 		elif c == '(':
 			stack.append(result)
 			stack.append(signvalue)
 			number = 0
 			result = 0
 			signvalue = 1
 		elif c == ')':
 			result += number*signvalue
 			result *= stack.pop()
 			result += stack.pop()
 			number = 0
 	return result + number * signvalue

def main():
  for _ in range(int(input())):
    infix = input().replace(" ", '')
    postfix = infix_to_postfix(infix)
    print(postfix)
    print(evaluate(postfix))
    print(calculate(infix))

if __name__ == '__main__':
  main()
