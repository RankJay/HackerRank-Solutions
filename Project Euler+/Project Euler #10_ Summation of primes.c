#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int t;
    scanf("%d", &t);
    for(int a=0;a<t;a++)
    {
        unsigned long long n,i,t1,j,sum=0;
        scanf("%d", &n);
        for(i=3;i<=n;i++)
        {
        t1=0;
        for(j=2;j<i;j++)
        {
        if(i%j==0)
        {
            t1=1;
        }
        }
        if(t1==0)
        {
            sum=sum+i;
        }
        }
        printf("%d\n", sum+2);
    }
    return 0;
}
