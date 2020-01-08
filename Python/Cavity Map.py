n = input()
data = []
pre = [[[0] for i in range(n)] for i in range(n)]
for i in range(n):
    data.append(list(raw_input()))
for i in range(1, n-1):
    for j in range(1, n-1):
        t = data[i][j]
        if (t>data[i-1][j] and t>data[i][j-1]
            and t>data[i+1][j] and t>data[i][j+1]):
            pre[i][j]='X'
for i in range(n):
    for j in range(n):
        if pre[i][j]=='X':
            data[i][j]='X'
for i in data:
    print "".join(i)
