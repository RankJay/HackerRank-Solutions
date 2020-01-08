n=int(input())
arr = [int(x) for x in input().split()]
ma=arr[0]
ma2=-1000
for i in range(n):
   ex = arr[i]
   if ex>ma:
    ma2=ma
    ma=ex
   elif ex>ma2 and ma>ex:
      ma2=ex    

print(ma2)

