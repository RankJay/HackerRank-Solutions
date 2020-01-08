#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int t,n,i,j,k,num=1;
    scanf("%d", &t);
    int ar1[t];
    for(i=0;i<t;i++)
    {
    num=1;
    scanf("%d", &n);
    j=n*(n+1)/2;
    ar1[i]=j;
    }

    for(i=0;i<t;i++)
    {
    printf("%d\n", ar1[i]);
    }
}
