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
    int n,d,i,j,k,count=0;
    scanf("%d", &n);
    scanf("%d", &d);
    int ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar1[i]);
    }

    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        if(abs(ar1[i]-ar1[j])==d)
        {
        for(k=j+1;k<n;k++)
        {
        if(abs(ar1[j]-ar1[k])==d)
        {
         count=count+1;
        }
        }
        }
    }
    }
    printf("%d", count);
}
