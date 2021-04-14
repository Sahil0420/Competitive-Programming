def valid_panlindrome(s):
  ans = "".join(i for i in s if i.isalnum()).lower()
  return ans[::-1] == ans


def valid_panlindrome_two(s):
  left, right = 0, len(s)-1
  while left < right:
    if s[left] != s[right]:
      return s[left + 1:right + 1] == s[left + 1:right + 1][::-1] or s[left:right] == s[left:right][::-1]
    left += 1
    right -= 1
  return True


def main():
  for _ in range(int(input())):
    s = input()
    print(valid_panlindrome_two(s))


if __name__ == '__main__':
  main()
