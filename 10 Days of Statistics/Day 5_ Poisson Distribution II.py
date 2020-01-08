arr=[float(x) for x in input().split()]
a=arr[0]
b=arr[1]
x1=a+(a**2)
x2=b+(b**2)
ca=160+40*x1
cb=128+40*x2
print(round(ca, 3))
print(round(cb, 3))
