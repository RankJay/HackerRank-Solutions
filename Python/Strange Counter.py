time=int(input())
cycle=3
total=0
while total<time:
    total=total+cycle
    cycle=cycle*2
print(int(total-time+1))
