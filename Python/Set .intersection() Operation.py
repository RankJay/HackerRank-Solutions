n=int(input())
eng=(input().split())

m=int(input())
fre=(input().split())

count=0
for entry in eng:
    if entry in fre:
        count=count+1


print(count)
