#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    scanf("%d", &n);
    int ar1[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &ar1[i]);
    }
    
    int ar2[n];
    for(i=0;i<n;i++)
    {
        ar2[i]=ar1[(n-1)-i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d ", ar2[i]);
    }
    return 0;
}

