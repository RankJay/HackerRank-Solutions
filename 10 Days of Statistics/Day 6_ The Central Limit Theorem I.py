import math

def erf(mean, std, value):
    return 0.5*(1+math.erf((value-mean)/(std*(2**0.5))))

a=int(input())
x=int(input())
mean=int(input())
meand=x*mean
stdev=int(input())
stdevd=math.sqrt(x)*stdev

print (round(erf(meand, stdevd, a), 4))
