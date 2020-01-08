arr=[float(x) for x in input().split()]
n=int(input())
num=arr[0]
den=arr[1]
p=num/den
q=1-p
print(round((q**(n-1))*p, 3))
