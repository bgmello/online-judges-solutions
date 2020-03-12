import datetime

tot = 0

for i in range(1901, 2001):
  for j in range(1,13):
    tot += datetime.datetime(i, j, 1).weekday()==6

print(tot)
