import os
import math

n=int(input())
i=1
for i in range(n):
    num=int(input())
    fac=[math.factorial(x) for x in range(1, 50)]
    i=i+1
    for i in range(len(fac)):
        if(int(fac[i])%(10**num)==0):
            print(i+1)
            break

