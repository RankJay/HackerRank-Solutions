def sumofdigits(n, k):
    digits=map(int, list(n))
    return sumit(str(sum(digits)*k))

def sumit(add):
    if len(add)==1:
        return int(add)
    else:
        digits=map(int, list(add))
        return sumit(str(sum(digits)))


ar=(input().split())
n=ar[0]
k=int(ar[1])
result=sumofdigits(n, k)
print(result)
