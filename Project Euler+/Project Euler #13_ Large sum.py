n=int(input())
arr=[]
for i in range(n):
    num=int(input())
    arr.append(num)

su=sum(arr)
l=len(str(su))
p=l-10
den=10**p
print(int(su/den))
