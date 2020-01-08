import math

string=input()
n=len(string)
num=math.sqrt(n)
num1=math.floor(num)
num2=math.ceil(num)

if (num1*num2)<n:
    num1=num2


for i in range(0, num2):
    print(string[i:n:num2], end = " ")
