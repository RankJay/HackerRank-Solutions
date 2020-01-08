#!/bin/python3

import math
import os
import random
import re
import sys

def fibonacciexp(a1,a2,t,re,ans):
    if re==t:
        return ans
    
    else:
        re=re+1
        a1=a2
        a2=ans
        ans=a1+(a2**2)
        return fibonacciexp(a1,a2,t,re,ans)


a=[int(x) for x in input().split()]
a1=int(a[0])
a2=int(a[1])
t=int(a[2])
re=3
ans=a1+(a2**2)
ans=fibonacciexp(a1,a2,t,re,ans)
print(ans)
