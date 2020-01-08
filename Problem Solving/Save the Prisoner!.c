#include<stdio.h>
#include<stdlib.h>

int main()
{
    unsigned long long int t,n,m,s,i,j;
    scanf("%llu", &t);
    for(j=0;j<t;j++)
    {
        scanf("%llu", &n);
        scanf("%llu", &m);
        scanf("%llu", &s);

        i=(s+m)-1;
        i=i%n;
        if(i==0)
        {
            i=n;
        }
        printf("%llu\n", i);
    }
}
 
