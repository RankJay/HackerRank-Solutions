import statistics

n=int(input())
arr=[int(x) for x in input().split()]
arr.sort()
larr=[]
rarr=[]
for i in range(round(n/2)):
    num=arr[i]
    larr.append(num)

print(int(statistics.median(larr)))
print(int(statistics.median(arr)))

if n%2==0:
    for i in range(round(n/2), n):
        num=arr[i]
        rarr.append(num)

else:
    for i in range(round(n/2)+1, n):
        num=arr[i]
        rarr.append(num)

print(int(statistics.median(rarr)))
