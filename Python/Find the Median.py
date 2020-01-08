import statistics
n=int(input())
arr=[int(x) for x in input().split()]
m=statistics.median(arr)
print(m)
