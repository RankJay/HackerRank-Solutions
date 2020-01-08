import math

a=int(input())
b=int(input())
angle=float(math.degrees(math.atan(a/b)))
angle=str(round(angle))
print(angle + "°")
