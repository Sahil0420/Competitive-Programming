"""
		A video player plays a game in which the character competes in a hurdle race.
		Hurdles are of varying heights, and the characters have a maximum height they can jump.
		There is a magic potion they can take that will increase their maximum jump height by unit for each dose.
		How many doses of the potion must the character take to be able to jump all of the hurdles.
		If the character can already clear all of the hurdles, return .
"""

max_jump = int(input())
hurdles = list(map(int , input().strip().split()))

a=max(hurdles) -max_jump
if a > 0 :
	print(a)
else:
	print(0)