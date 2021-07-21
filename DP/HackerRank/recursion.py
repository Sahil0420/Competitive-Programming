def length(s:str):
	if s == '':
		return 0
	else:
		return 1+length(s[1:])

print(length("sahil"))
