n=int(input())
arr=[]
for i in range(n):
    num=int(input())
    arr.append(num)

arr.sort()
for entry in arr:
    print(entry, end="\n")
