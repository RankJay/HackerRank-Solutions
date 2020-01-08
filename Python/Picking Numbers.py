import sys


n = int(input().strip())
array = list(map(int, input().strip().split(' ')))
fr=[0]*100
ma=0
for num in array:
    fr[num]=fr[num]+1

for i in range(1, n):
    ma=max(ma, fr[i]+fr[i-1])

print(ma)
