def helper(d , num):
  if d==0:
    return False
  if d==1:
    return True
  if num%d==0:
    return True
  return False

def find_digits(n):
  temp = n
  res = 0
  while temp >= 1:
    res += 1 if helper(temp%10 , n) else 0
    temp//=10
  return res

def main():
  n = int(input())
  for _ in range(n):
    a = int(input())
    print(find_digits(a))

if __name__ == '__main__':
  main()