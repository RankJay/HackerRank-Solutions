#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i,j,sum=0;
    scanf("%d", &n);
    int ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar1[i]);
    }
   
    for(i=0;i<n;i++)
    {
       sum=sum+ar1[i];
    }

    printf("%d", sum);

    return 0;
}

