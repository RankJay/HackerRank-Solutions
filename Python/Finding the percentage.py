n=input()
vad=list()
for i in range(int(n)):
    s=[x for x in input().split()]
    vad.append(s)
    
person=input()
for i in range(int(n)):
    if person==vad[i][0]:
        avg=float((float(vad[i][1])+float(vad[i][2])+float(vad[i][3]))/3)
        print(f'{avg:.2f}')
