n=int(input())
arr=[int(x) for x in input().split()]
freq=[int(x) for x in input().split()]
final=[]
for i in range(n):
    for j in range(freq[i]):
        final.append(arr[i])


final.sort()
m=len(final)
larr=[]
rarr=[]
if m%2==0:
    for i in range(0, round(m/2)):
        larr.append(final[i])

    for j in range(round(m/2), m):
        rarr.append(final[j])
else:
    for i in range(0, round((m-1)/2)):
        larr.append(final[i])

    for j in range(round((m-1)/2)+1, m):
        rarr.append(final[j])



if len(larr)%2==0:
    l1=(larr[int((len(larr)/2)-1)]+larr[int(len(larr)/2)])/2
    l2=(rarr[int((len(rarr)/2)-1)]+rarr[int(len(rarr)/2)])/2

else:
    l1=larr[int((len(larr)-1)/2)]
    l2=rarr[int((len(rarr)-1)/2)]

print(float(abs(l1-l2)))
