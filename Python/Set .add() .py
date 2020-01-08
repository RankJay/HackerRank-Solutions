n=int(input())
names=[]
for i in range(n):
    x=input()
    names.append(x)

count=0
check=[]
for num in names:
    if num not in check:
        check.append(num)


print(len(check))

