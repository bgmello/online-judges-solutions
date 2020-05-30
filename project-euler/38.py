import numpy as np

def nToArray(n):
    ans = []
    while n!=0:
        ans.append(n%10)
        n //= 10

    return ans[::-1]

def arrayToN(arr):
    exp = np.arange(len(arr))
    return np.sum(arr[::-1]*10**exp)

def concat_prod(n):

    ans = []

    i = 1
    while len(ans)<9:
        ans.extend(nToArray(n*i))
        i+=1

    return ans

def isPandigit(arr):
    if(len(arr)!=9): return False

    if np.any(np.array(arr)==0): return False

    return len(np.unique(arr))==9

ans_max = -1
num_max = -1
for i in range(1, 1000000):
    if isPandigit(concat_prod(i)):
        if ans_max < arrayToN(concat_prod(i)):
            num_max = i
            ans_max = arrayToN(concat_prod(i))

print(num_max)
print(ans_max)
