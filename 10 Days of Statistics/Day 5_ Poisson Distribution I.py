def factorial(n):
    if n==0 or n==1:
        return 1
    else:
        return n*factorial(n-1)

lamb=float(input())
k=float(input())
den=factorial(k)
poisson=((lamb**k)*(1/((2.71828)**(lamb))))/den

print(round(poisson, 3))
