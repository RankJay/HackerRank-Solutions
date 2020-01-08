s=input()

p1=0
p2=0
p3=0
p4=0
p5=0
for a in s:
    if a.isalnum():
        p1=1
        break
for a in s:
    if a.isalpha():
        p2=1
        break
for a in s:
    if a.isdigit():
        p3=1
        break
for a in s:
    if a.islower():
        p4=1
        break
for a in s:
    if a.isupper():
        p5=1
        break

if p1==1:
    print("True")
else:
    print("False")

if p2==1:
    print("True")
else:
    print("False")

if p3==1:
    print("True")
else:
    print("False")

if p4==1:
    print("True")
else:
    print("False")

if p5==1:
    print("True")
else:
    print("False")
