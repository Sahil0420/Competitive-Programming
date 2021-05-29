def letterCombination(digits):
  numbers = {"2": "abc", "3": "def", "4": 'ghi', '5': 'jkl',
             '6': 'mno', '7': 'pqrs', '8': 'tuv', '9': 'wxyz'}
  ans = []

  if len(digits)==0:
  	return ans

  def solve(i, current):
    if len(current) == len(digits):
      ans.append(current)
      return
    for c in numbers[digits[i]]:
      solve(i+1, current+c)

  solve(0, "")
  return ans

def main():
  t =int(input())
  while t:
  	digits = input()
  	print(letterCombination(digits))
  	t-=1


if __name__ == '__main__':
  main()
