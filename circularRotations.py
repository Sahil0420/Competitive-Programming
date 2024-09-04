def circularArrayRotation(a , k , queries):
	n = len(a)
	result = []
	for i in queries:
		result.append(a[(i-k)%(n)])
	return result

def main():
	first_multiple_input = input().rstrip().split()
	n = int(first_multiple_input[0])
	k = int(first_multiple_input[1]) 
	q = int(first_multiple_input[2]) 
	a = list(map(int, input().rstrip().split()))
	queries = []

	for _ in range(q):
		queries_item = int(input().strip())
		queries.append(queries_item)
		result = circularArrayRotation(a, k, queries)
	print(result)

if __name__ == '__main__':
	main()
