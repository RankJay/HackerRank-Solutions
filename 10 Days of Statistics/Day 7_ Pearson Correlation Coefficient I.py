import statistics

def standardDeviation(values,mean):
    data=[(val-mean)**2 for val in values]
    return (sum(data)/float(len(data)))**0.5


n=int(input())
n1=[float(x) for x in input().split()]
mean1=statistics.mean(n1)
stdev1=standardDeviation(n1, mean1)
n2=[float(x) for x in input().split()]
mean2=statistics.mean(n2)
stdev2=standardDeviation(n2, mean2)
num=sum((n1[i]-mean1)*(n2[i]-mean2) for i in range(n))

print(num/(n*stdev1*stdev2))
