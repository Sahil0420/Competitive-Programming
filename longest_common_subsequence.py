def longest_common_sequence(text1, text2):
  memo = {}

  def solve(i, j):
    if i == len(text1) or j == len(text2):
      return 0

    if (i, j) in memo:
      return memo[(i, j)]

    if text1[i] == text2[j]:
      memo[(i, j)] = 1 + solve(i+1, j+1)
    else:
      memo[(i, j)] = max(solve(i+1, j), solve(i, j+1))

    return memo[(i, j)]

  return solve(0, 0)


def longestCommonSubsequence(text1: str, text2: str) -> int:
  dp = [0] * len(text1)
  longest = 0
  for c in text2:
    cur_length = 0
    for i, val in enumerate(dp):
      if cur_length < val:
        cur_length = val
      elif c == text1[i]:
        dp[i] = cur_length + 1
        longest = max(longest, cur_length + 1)

  return longest


def main():
  text1 = input()
  text2 = input()
  print(longest_common_sequence(text1, text2))
  print(longestCommonSubsequence(text1, text2))


if __name__ == '__main__':
  main()
