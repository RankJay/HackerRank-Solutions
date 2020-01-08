import statistics

n=int(input())
arr=[int(x) for x in input().split()]
print(statistics.mean(arr))
print(statistics.median(arr))

def getMode(arr):
    mode=0
    size=len(arr)
    count, max = 0, 0
    copy=arr
    copy.sort()
    current=0
    for i in copy:
        if (i==current):
            count=count+1
        else:
            count=1
            current=i
        if (count>max):
            max=count
            mode=i
    return mode
print(getMode(arr))
