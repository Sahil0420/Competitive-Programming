# a,b,c,n = (int(input()) for _ in range(4))
# print(a,b,c,n)

# arr=[1,2,2]
# arr = set(arr)
# arr = sorted(list(arr))
# print(arr[-2])

# def avg(l : list):
# 	s=0
# 	for x in l:
# 		s+=x
# 	return (s/len(l))

# n = int(input())
# student_marks = {}
# for _ in range(n):
#     line = input().split()
#     name, scores = line[0], line[1:]
#     scores = list(map(float, scores))
#     student_marks[name] = scores

# query_name =input()
# print('{:.2f}'.format(avg(student_marks[query_name])))

# # 3
# # Krishna 67 68 69
# # Arjun 70 98 63
# # Malika 52 56 60
# # Arjun

# t = int(input())
# while(t):
#     ab = list(input().split())
#     a=ab[0]
#     b=ab[1]
#     try : 
#         print(int(a)//int(b))
#     except ZeroDivisionError as e :
#         print("Error Code:",e)
#     except ValueError as v:
#         print("Error Code:",v)
#     t-=1

# ab=list(input().split())
# print(ab)

for _ in range(int(input())):
	name = input()
	score = float(input())
	

