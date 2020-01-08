import sys


n,k = raw_input().strip().split(' ')
n,k = [int(n),int(k)]
a = map(int,raw_input().strip().split(' '))
count = 0


for i in range(len(a)):
    for j in range(len(a)):
        if (a[i]+a[j])%k != 0:
            count = count+1

print count
