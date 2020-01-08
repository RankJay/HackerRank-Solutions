n=int(input())
ar=[int(x) for x in input().split()]
con=1
arr=[]
for num in ar:
    if num not in arr:
        arr.append(num)

arr.sort()
least=arr[0]
for num in arr:
    if num<=least+4 and num>=least:
        continue
    else:
        con=con+1
        least=num


print(con)
