def calculate(s: str):
  def update(op, num):
    if op=='+' : stack.append(num)
    if op=='-' : stack.append(-num)
    if op=='/' : stack.append(int(stack.pop()/num))
    if op=="*" : stack.append(num*stack.pop())

  num,idx,stack,sign = 0,0,[],'+'
  while idx < len(s):
  	char = s[idx]
  	if char == ' ':
  		continue
  	if char.isdigit():
  		num=(num*10)+int(char)
  	elif char in '/+-*':
  		update(sign, num)
  		num , sign = 0 , char
  	elif char == '(':
  		num , j = calculate(s[idx+1:])
  		idx = idx+ j
  	elif char == ')':
  		update(sign , num)
  		return sum(stack) , idx+1
  	idx+=1

  update(sign , num)
  return sum(stack)


def main():
  for _ in range(int(input())):
    infix = input().strip()
    a = calculate(infix)
    print(f'''{infix} = {a}''')


if __name__ == '__main__':
  main()
