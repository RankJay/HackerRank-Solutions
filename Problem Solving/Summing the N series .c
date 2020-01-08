#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned long long int n,i,j,k;
    scanf("%llu", &n);
    unsigned long long int ar1[n];
    for(i=0;i<n;i++)
    {
     scanf("%llu", &j);
     k=j*j;
     ar1[i]=k;

    }
    for(i=0;i<n;i++)
    {
        printf("%llu\n", ar1[i]);
    }
}
