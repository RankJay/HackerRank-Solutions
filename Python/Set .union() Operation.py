n=input()
arr1=[int(x) for x in input().split()]
m=input()
arr2=[int(y) for y in input().split()]
#print(arr1)
l=len(arr1)
for x in arr2:
    if x not in arr1:
        l=l+1


print(l)
