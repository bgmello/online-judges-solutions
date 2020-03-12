import inflect

p = inflect.engine()

tot=0

for i in range(1,1001):
  for c in p.number_to_words(i):
    if c!=" " and c!="-":
      tot+=1

print(tot)
