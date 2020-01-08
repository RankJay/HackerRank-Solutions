arr=[float(x) for x in input().split()]
n=int(input())
num=arr[0]
den=arr[1]
p=num/den
q=1-p
sum1=0
for i in range(1, 5+1):
    sum1=sum1+round((q**(i-1))*p, 3)

print(round(sum1, 3))
