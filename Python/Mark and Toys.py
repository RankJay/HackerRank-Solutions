a=[int(x) for x in input().split()]
n=a[0]
money=a[1]
arr=[int(x) for x in input().split()]
arr.sort()
s=0
i=0
while s<money:
    s=s+arr[i]
    i=i+1

print(i-1)
