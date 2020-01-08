n=input()
arr1=[int(x) for x in input().split()]
m=input()
arr2=[int(x) for x in input().split()]

for x in arr2:
    if x in arr1:
        arr1.remove(x)


print(len(arr1))
