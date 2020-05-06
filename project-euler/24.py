from itertools import permutations

s = [*permutations(range(10), 10)]

sorted(s)
print(s[1000000-1])