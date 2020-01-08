size=int(input())
array=[str(x) for x in input().split()]
index=int(input())
element=array[index-1]
count=0
total=0
for i in range(size):
    for j in range(i+1, size):
        total=total+1
        if element==array[i] or element==array[j]:
            count=count+1



print(count/total)
