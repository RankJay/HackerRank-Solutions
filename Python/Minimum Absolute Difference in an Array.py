n=int(input())
arr=[int(x) for x in input().split()]
fin=10000
for i in range(0, n):
    for j in range(i+1, n):
        d=abs(arr[i]-arr[j])
        #print(d)
        if fin>d:
            fin=d

print(fin)
