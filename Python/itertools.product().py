from __future__ import print_function

def remove(axb):
    return axb.replace("'", "")


A=input().split()
B=input().split()
axb=list()
for i in range(len(A)):
    for j in range(len(B)):
       print('(' + A[i] + ', ' + B[j] + ') ', end='')
