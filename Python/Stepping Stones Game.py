n=int(input())
jump=1
u=0
arr=[(x*(x+1))/2 for x in range(1, 10000)]
for i in range(n):
    num=int(input())
    for j in range(len(arr)):
        if num==arr[j]:
            u=1
            break
            
if u==1:
    print("Go On Bob " + str(j+1))

else:
    print("Better Luck Next Time")