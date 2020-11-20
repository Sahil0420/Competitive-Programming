from tabulate import tabulate

def printSudoku(board):
	print(tabulate(board , tablefmt='fancy_grid'))

def isSafe(row, col , board, n , val)->bool:
	for i in range(n):
		# check in rows
		if board[i][col]==val:
			return False
		#check in columns 
		if board[row][i]== val:
			return False
		#check in 3x3 grid
		if ( board[3*(row//3) + i//3][3*(col//3)+i%3]):
			return False
	return True

def solveSudoku(board , n)->bool:
	for row in range(n):
		for col in range(n):
			if board[row][col]==0:
				for val in range(1,10):
					if isSafe(row, col, board, n , val):
						board[row][col] = val
						aageSolutionPossibleHai = solveSudoku(board, n)
						if aageSolutionPossibleHai:
							return True
						else:
							board[row][col] = 0
				return False
	return True

def sudoku(board):
	n = len(board[0])
	solveSudoku(board , n)
	printSudoku(board)
# def printSudoku(board ):
# 	rowc=-1
# 	n = len(board[0])
# 	for i in range(n):
# 		rowc+=1
# 		if rowc==3:
# 			print()
# 			rowc=0
# 		colc=-1
# 		for j in range(n):
# 			colc+=1
# 			if colc==3:
# 				print(" ",end='')
# 				colc=0
# 			print(board[i][j],end=' ')
# 		print()


board = []
for i in range (9):
	temp = list(map(int, input().strip().split()))
	board.append(temp)

# printSudoku(board)
sudoku(board)
