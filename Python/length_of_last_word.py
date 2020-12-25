def length_of_last_word(string):
	res = list(string.strip().split(' '))
	return len(res[-1])

def main():
	for i in range(int(input())):
		string = input()
		print(length_of_last_word(string))

if __name__ == '__main__':
	main()