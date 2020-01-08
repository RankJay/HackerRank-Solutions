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
    int n,r,i,j,k;
    scanf("%d", &n);
    scanf("%d", &r);
    int ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar1[i]);
    }
    for(j=0;j<n;j++)
    {
        k=j+r;
        if(k>=n)
        {
            k=k-n;
        }
        printf("%d ", ar1[k]);
    }
    return 0;
}
