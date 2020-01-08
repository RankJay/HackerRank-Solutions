nm=input().split()
n=int(nm[0])
m=int(nm[1])
narr=[]
marr=[]
for i in range(n):
    num=input()
    narr.append(num)

for j in range(m):
    num2=input()
    marr.append(num2)

for alpha in marr:
    itr=0
    for i in range(n):
        if alpha==narr[i]:
            itr=itr+1
            print(i+1, end=" ")


    if itr==0:
            print("-1")
    print('')
