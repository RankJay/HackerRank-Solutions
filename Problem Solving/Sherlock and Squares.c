#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    long long int n,a,b,i,j,num,count,t;
    scanf("%lld", &t);
    int ar[t];
    for(j=0;j<t;j++)
    {
    count=0;
    scanf("%d", &a);
    scanf("%d", &b);
    
    for(i=1;i<100000;i++)
    {
    num=i*i;
    if(num>=a && num<=b)
    {
        count=count+1;
    }
    }
    ar[j]=count;
    }

    for(j=0;j<t;j++)
    {
        printf("%d\n", ar[j]);
    }
}
