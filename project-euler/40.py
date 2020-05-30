import numpy as np

def nToArray(n):

    arr = []
    while n!=0:
        arr.append(n%10)
        n//=10

    return arr[::-1]

def getArr():

    arr = [0]

    i = 1
    while len(arr)<=1000000:
        arr.extend(nToArray(i))

        i+=1
        
    return arr


arr = getArr()
print(arr[1]*arr[10]*arr[100]*arr[1000]*arr[10000]*arr[100000]*arr[1000000])
