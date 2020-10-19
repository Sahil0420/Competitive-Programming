def floodFill(image, sr, sc, color):
  if image[sr][sc] == color:
    return image

  prev_color = image[sr][sc]
  rows, cols = len(image), len(image[0])

  def dfs(r, c):
    
    if 0 <= r < rows and 0 <= cols and image[r][c] == prev_color:
      image[r][c] = color
      dfs(r-1, c)
      dfs(r+1, c)
      dfs(r, c-1)
      dfs(r, c+1)
  dfs(sr, sc)
  return image


def print2d(arr):
  for a in arr:
    print(*a)


def main():
  for _ in range(int(input())):
    m, n = map(int, input().strip().split())
    image = [0]*m
    for i in range(m):
      image[i] = list(map(int, input().strip().split()))
    sr, sc, color = map(int, input().split())
    floodFill(image, sr, sc, color)
    print2d(image)


if __name__ == '__main__':
  main()
'''
Faceless naa koi face pe emotion
Mai ASAP chalun bas raste pe focus
ye back bitch baatein mere laude pe bajjein
mai stress karun door bas akele mein ro kar
aimless naa koi mann mein ambition
baawe high ho jaaye ek baar sunkar

'''
