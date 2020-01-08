def Remove(duplicate): 
    final_list = [] 
    for num in duplicate: 
        if num not in final_list: 
            final_list.append(num) 
    return final_list 


m=int(input())
ar=[int(x) for x in input().split()]
ar1=Remove(ar)
n=int(input())
ar22=[int(x) for x in input().split()]
ar2=Remove(ar22)
union=[]
for val in ar1:
    union.append(val)

for val in ar2:
    if val not in union:
        union.append(val)
#print(union)
inter=[]
for val in ar1:
    if val in ar2:
        inter.append(val)
#print(inter)
diff=[]
for val in union:
    if val not in inter:
        diff.append(val)

diff.sort()
for i in range(len(diff)):
    print(diff[i])
