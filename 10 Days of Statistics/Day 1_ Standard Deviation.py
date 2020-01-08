import math
n=int(input())
arr=[int(x) for x in input().split()]
mean=int(sum(arr)/n)
std=[]
for i in range(n):
    std.append(abs(arr[i]-mean))

for i in range(n):
    std[i]=std[i]*std[i]

t=int(sum(std))
stddev=math.sqrt(t/n)
print(stddev)
