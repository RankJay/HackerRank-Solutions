#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t,n,m,i,j,k,p;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &m);
        scanf("%d", &n);
        int ar1[n];
        for(j=0;j<n;j++)
        {
            scanf("%d", &ar1[j]);
        }

        for(p=0;p<n;p++)
        {
        for(k=p+1;k<n;k++)
        {
        if(ar1[p]+ar1[k]==m)
        {
            printf("%d %d\n", p+1,k+1);
            break;
        }
        }
        }
    }
}
