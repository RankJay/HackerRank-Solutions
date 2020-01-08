import math

def erf(mean, std, value):
    return 0.5*(1+math.erf((value-mean)/(std*(2**0.5))))

a=[float(x) for x in input().split()]
mean=a[0]
stdev=a[1]
x=float(input())
b=[float(x) for x in input().split()]

print (round(erf(mean, stdev, x), 3))
print (round(erf(mean, stdev, b[1])-erf(mean, stdev, b[0]), 3))
