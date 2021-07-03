# def canAttack(board):
# 	while

n=int(input(f'Enter the board size : '))
print(n)

board=[]
for x in range(n):
	for y in range(n):
		board.append((x+1,y+1))


for x ,y in zip(board,range(n*n)):
	if y%n==0:
		print("\n\n")
	print(x,end=' ')

