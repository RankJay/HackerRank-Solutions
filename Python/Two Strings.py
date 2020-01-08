n=int(input())
a=0
for i in range(n):
    a=input()
    b=input()
    for word in a:
        if word in b:
            a=1
    if a==1:
        print("YES")
    else:
        print("NO")
