def factorial(n):
    if n==0 or n==1:
        return 1
    else:
        return n*factorial(n-1)
    
def nCr(n,r):
    return factorial(n)/(factorial(r) * factorial(n-r))

arr=[float(x) for x in input().split()]
p=0.12
q=0.88
sum1=0
for i in range(0, 3):
    temp=nCr(10,i)
    temp1=(p**i)*(q**(10-i))
    sum1=sum1+temp*temp1
    
print(round(sum1,3))

sum2=0
for i in range(2, 11):
    temp=nCr(10,i)
    temp1=(p**i)*(q**(10-i))
    sum2=sum2+temp*temp1
    
print(round(sum2,3))
