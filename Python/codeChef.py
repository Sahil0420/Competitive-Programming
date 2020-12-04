def 	
















# def getPairs( num : int ):
# 	ans = []
# 	for x in range(1,num):
# 		for y in range(1,num):
# 			if(x+y == num):
# 				ans.append((x,y))

# def binString(a,b):
# 	if(a==b and (a%2!=0 or b%2!=0)):
# 		return "NO"
# 	else:
# 		return "YES"
# 	if(abs(a-b)!=1):
# 		return "NO"
# 	return "YES"

# def toString(List): 
#     return ''.join(List) 

# def evenSplits():
# 	n = int(input())
# 	s = input()
# 	if(n<=2) :
# 		print(s)
# 		return
# 	else:
# 		s = sorted(s)
# 	print(toString(s))
# 	return

# print(binString(4, 3))

# def deleciousQuery():
# 	n = int(input())
# 	menu = list(map(int , input().strip().split()))
# 	queries = int(input())
# 	while(queries):
# 		pk = list(map(int , input().strip().split()))
# 		p = pk[0]				 #special ingredient	
# 		k = pk[1] 				#no_of_dishes_he_wants_to_eat
# 		queries-=1
# 		for i in range(n):
# 			if(p not in menu):
# 				break 
# 			ind=menu.index(p)
# 			if(menu[i]%p==0 and i!=ind ) and (menu[i]>menu[ind] and i>ind):
# 				menu[i],menu[ind] = menu[ind],menu[i]
# 		s=0
# 		for i in range(k):
# 			s+=menu[i]
# 		print(s)




# if __name__ == '__main__':
# 	tc = int(input())
# 	while(tc):
# 		deleciousQuery()
# 		tc-=1

