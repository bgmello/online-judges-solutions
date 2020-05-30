import numpy as np

def nToArray(x):
    arr = []
    while x!=0:
        arr.append(x%10)
        x //= 10

    return arr[::-1]

def arrayToN(arr):

    exp = 10**np.arange(len(arr))
    return np.sum(arr[::-1]*exp)

def isPrime(x):
    
    if(x==1):return False
    i = 2
    while i*i<=x:
        if(x%i==0):return False
        i+=1
    return True

def isTruncable(x):
    arr = nToArray(x)
    for i in range(len(arr)):
   
        if not isPrime(arrayToN(arr[i:])):
            return False

        if not isPrime(arrayToN(arr[:-i])):
            return False
        
    return True

ans = 0
n = 10
nums = 0
while nums<11:
    if(isTruncable(n)):
        ans+=n
        nums+=1
    n+=1

print(ans)
