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
    int n,i,j,k;
    scanf("%d", &n);
    int ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar1[i]);
    }
    for(j=n-1;j>=0;j--)
    {
        printf("%d ", ar1[j]);
    }
    return 0;
}
