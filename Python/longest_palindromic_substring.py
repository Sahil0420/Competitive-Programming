import concurrent.futures


def expand_around_center(s, left, right):
  while left >= 0 and right < len(s) and s[left] == s[right]:
    left -= 1
    right += 1
  return s[left + 1:right]


def process_chunk(s, centers):
  longest = ""
  for center in centers:
    odd_palindrome = expand_around_center(s, center, center)
    even_palindrome = expand_around_center(s, center, center + 1)
    longest = max(longest, odd_palindrome, even_palindrome, key=len)
  return longest


def longest_palindromic_substring(s):
  n = len(s)
  if n == 0:
    return ""

  num_threads = 4  # Number of threads
  centers = list(range(n))
  # Split centers into chunks
  chunk_size = (n + num_threads - 1) // num_threads

  chunks = [centers[i:i + chunk_size]
            for i in range(0, len(centers), chunk_size)]

  # Multithreaded processing
  with concurrent.futures.ThreadPoolExecutor(max_workers=num_threads) as executor:
    results = executor.map(lambda chunk: process_chunk(s, chunk), chunks)

  # Find the longest palindrome among all results
  return max(results, key=len)

def main():
	for _ in range(int(input())):
		string = input()
		print(longest_palindromic_substring(string))


if __name__ == '__main__':
	main()