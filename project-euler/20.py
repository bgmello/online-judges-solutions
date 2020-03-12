fact = lambda x : 1 if x==1 else x*fact(x-1)

n = str(fact(100))
tot = 0

for c in n:
  tot+=ord(c)-ord('0')

print(tot)
