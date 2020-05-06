with open('input22.txt', 'r') as f:
  names=f.read().replace("\"", "").split(',')

names = sorted(names)
ans = 0

for i,name in enumerate(names):
  tmp = 0
  for c in name:
    tmp += (ord(c)-ord('A')+1)

  ans+=tmp*(i+1)


print(ans)
