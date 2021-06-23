'''
	An arcade game player wants to climb to the top of the leaderboard and track their ranking. The game uses Dense Ranking, so its leaderboard works like this:
    The player with the highest score is ranked number 
	on the leaderboard.
	Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number 

'''

from bisect import bisect_left
from collections import Counter

ranked = list(map(int, input().rstrip().split()))
player = list(map(int, input().rstrip().split()))

# print(climbingLeaderboard(ranked, player))
counts = Counter(ranked)
counts = sorted(counts)
print(counts)
n=len(counts)
ans=[]
for a in player:
	i = bisect_left(counts, a)
	if i < n and counts[i] == a:
		ans+=[n-i]
	else:
		ans+=[n+1-i]
print(ans)
"""
	100 90 90 80 75 60
	50 65 77 90 102 
"""