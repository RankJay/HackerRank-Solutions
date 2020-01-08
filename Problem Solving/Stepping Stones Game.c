#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned long long t,n,i,j,k=0,p;
    scanf("%lld", &t);
    for(i=0;i<t;i++)
    {
        p=0;
        scanf("%lld", &n);
        for(j=1;j<n;j++)
        {
            k=k+j;
            if(n==k)
            {
              p=1;
              break;
            }
        }
        if(p==1)
        {
            printf("Go On Bob %lld\n", j);
        }
        else
        {
            printf("Better Luck Next Time\n");
        }
    }
}
