t=int(input())
for i in range(t):
    n=int(input())
    sum=0
    for i in range(3, n+1):
        t1=0
        for j in range(2, i):
            if(i%j==0):
                t1=1
                break

        if(t1==0):
            sum=sum+i
    print(sum+2)
