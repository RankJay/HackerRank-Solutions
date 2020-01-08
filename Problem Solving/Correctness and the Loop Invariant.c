#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    int n,i,j,k,big=0;
    scanf("%d", &n);
    int ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar1[i]);
    }
    for(i=0;i<n;i++)
    {
        if(big<ar1[i])
        {
            big=ar1[i];
        }
    }
    for(j=1;j<=big;j++)
    {
    for(i=0;i<n;i++)
    {
        if(ar1[i]==j)
        {
            printf("%d ", ar1[i]);
        }
    }
    }
}
