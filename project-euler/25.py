
l = []

def fib(n):
	if ((n==1) or (n==2)):
		return 1

	l.append(l[-1]+l[-2])
	return l[-1]


l.append(1)
l.append(1)

i=1

while(len(str(fib(i)))<1000):
	i+=1

print(i)