import numpy as np

with open('input42.txt', 'r') as f:
    inp = f.read()

inp = inp.split(',')

inp = [w[1:-1] for w in inp]

def isTriangNum(n):
    x = 2*n

    if n==1:
        return True

    i = 2
    while True:
        if i*i>x:
            return False 

        if x%i==0:
            if i*(i+1)==x:
                return True
        i+=1

def isTriangWord(word):
    n = np.sum([ord(c)-ord('A')+1 for c in word])
    return isTriangNum(n)


print(np.sum([1 for word in inp if isTriangWord(word)]))
